#!/usr/bin/env node
/**
 * Complete REA + Ghidra 12.1.4 extraction pipeline for Dungeon Keeper (KEEPER.elf).
 * Launches a single persistent GhidraClient session and extracts:
 *   1. All segments, symbols/names, strings (3,274), and procedures (2,526)
 *   2. Cross-references (xrefs) for all .cpp/.c/.h source filename strings
 *   3. Full decompilation (procedure_info, procedure_pseudo_code, callers, callees, outgoing_references)
 *      for all 2,526 procedures into /home/merlin/dk-reconstructed/catalog/
 */

import { mkdir, writeFile, appendFile } from "node:fs/promises";
import { existsSync, readFileSync } from "node:fs";
import { isAbsolute, join } from "node:path";
import { fileURLToPath } from "node:url";

import { parseBinaryTarget } from "../dist/application/BinaryTargetResolver.js";
import { resolveGhidraAnalysisProfile } from "../dist/ghidra/GhidraAnalysisProfile.js";
import { GhidraClient } from "../dist/ghidra/GhidraClient.js";
import { inspectGhidraInstallation } from "../dist/ghidra/GhidraInstallation.js";
import { SUPPORTED_GHIDRA_VERSION } from "../dist/ghidra/GhidraReleasePolicy.js";
import { GhidraHeadlessLauncher } from "../dist/ghidra/GhidraLauncher.js";
import { GHIDRA_PROVIDER_IDENTITY } from "../dist/ghidra/GhidraProviderCapabilities.js";
import {
  parseGhidraInventoryInput,
  parseGhidraInventoryResult,
} from "../dist/ghidra/GhidraInventoryValues.js";
import {
  parseGhidraFunctionInput,
  parseGhidraFunctionResult,
} from "../dist/ghidra/GhidraFunctionValues.js";

const targetPath = process.argv[2] ?? "/home/merlin/Dungeon Keeper/re/KEEPER.elf";
const outRoot = process.argv[3] ?? "/home/merlin/workspace/dk-reconstructed";
const catalogDir = join(outRoot, "catalog");

await mkdir(catalogDir, { recursive: true });

const installDir = process.env.GHIDRA_INSTALL_DIR ?? "/opt/ghidra_12.1.4_PUBLIC";
if (!isAbsolute(installDir)) {
  throw new Error("GHIDRA_INSTALL_DIR must be an absolute path");
}

const resourceOwner = {
  run: (fn) => fn(),
  retain: () => {},
};

const installation = await inspectGhidraInstallation({
  environment: process.env,
  installDir,
  resourceOwner,
  ...(process.env.JAVA_HOME === undefined ? {} : { javaHome: process.env.JAVA_HOME }),
});

if (installation.status !== "available" || installation.analyzeHeadlessPath === null) {
  throw new Error(`Ghidra installation unavailable: ${JSON.stringify(installation)}`);
}

const parsedTarget = await parseBinaryTarget(targetPath);
if (!parsedTarget.ok) throw parsedTarget.error;

const profile = await resolveGhidraAnalysisProfile(
  parsedTarget.value,
  GHIDRA_PROVIDER_IDENTITY,
  installation,
);
if (!profile.ok || profile.value.profile === null) {
  throw new Error("Could not resolve Ghidra analysis profile");
}

const client = new GhidraClient({
  launcher: new GhidraHeadlessLauncher({
    configurationDirectoryName: installation.configurationDirectoryName,
    environment: process.env,
    analyzeHeadlessPath: installation.analyzeHeadlessPath,
    javaHome: installation.javaHome ?? process.env.JAVA_HOME ?? "/usr/lib/jvm/java-21-openjdk-amd64",
    bridgeScriptPath: fileURLToPath(
      new URL("../bridge/ghidra/ReaGhidraBridge.java", import.meta.url),
    ),
    platform: installation.platform,
  }),
  targetPath: parsedTarget.value.path,
  targetSha256: parsedTarget.value.sha256,
  providerVersion: SUPPORTED_GHIDRA_VERSION,
  profileDigest: profile.value.profile.digest,
});

async function invCall(operation, parameters) {
  const input = parseGhidraInventoryInput(operation, parameters);
  if (!input.ok) throw input.error;
  const called = await client.callTool(operation, input.value);
  if (!called.ok) throw new Error(`${operation} failed: ${called.error.message}`);
  const parsed = parseGhidraInventoryResult(operation, called.value);
  if (!parsed.ok) throw parsed.error;
  return parsed.value;
}

async function fnCall(operation, parameters) {
  const input = parseGhidraFunctionInput(operation, parameters);
  if (!input.ok) throw input.error;
  const called = await client.callTool(operation, input.value);
  if (!called.ok) throw new Error(`${operation} failed: ${called.error.message}`);
  const parsed = parseGhidraFunctionResult(operation, called.value);
  if (!parsed.ok) throw parsed.error;
  return parsed.value.value;
}

console.log(`[1/4] Starting persistent Ghidra 12.1.4 session on ${targetPath}...`);
const t0 = Date.now();
try {
  const started = await client.start();
  if (!started.ok) throw started.error;
  console.log(`Ghidra session started in ${((Date.now() - t0) / 1000).toFixed(1)}s`);

  console.log(`[2/4] Fetching segments, procedures, strings, and symbol names...`);
  const segments = await invCall("list_segments", { document: null });
  const procedures = await invCall("list_procedures", { document: null });
  const strings = await invCall("list_strings", { document: null, address: null });
  const names = await invCall("list_names", { document: null, address: null });

  await writeFile(join(catalogDir, "segments.json"), JSON.stringify(segments, null, 2));
  await writeFile(join(catalogDir, "procedures.json"), JSON.stringify(procedures, null, 2));
  await writeFile(join(catalogDir, "strings.json"), JSON.stringify(strings, null, 2));
  await writeFile(join(catalogDir, "names.json"), JSON.stringify(names, null, 2));
  console.log(
    `Saved inventories: ${segments.length} segments, ${procedures.length} procedures, ${strings.length} strings, ${names.length} names`,
  );

  console.log(`[3/4] Resolving xrefs for embedded source filenames (.cpp/.c/.h)...`);
  const sourceFileStrings = strings.filter((s) =>
    /\.(cpp|c|h|hpp|asm)$/i.test((s.value ?? "").trim()),
  );
  const sourceFileXrefs = [];
  for (const s of sourceFileStrings) {
    try {
      const refs = await fnCall("xrefs", { document: null, address: s.address });
      const owners = [];
      for (const refAddr of refs) {
        try {
          const owner = await invCall("resolve_containing_procedure", {
            document: null,
            address: refAddr,
          });
          owners.push({ ref_address: refAddr, procedure: owner });
        } catch {
          owners.push({ ref_address: refAddr, procedure: null });
        }
      }
      sourceFileXrefs.push({
        string_address: s.address,
        filename: s.value.trim(),
        xref_count: refs.length,
        owners,
      });
    } catch (err) {
      sourceFileXrefs.push({
        string_address: s.address,
        filename: s.value.trim(),
        error: String(err),
      });
    }
  }
  await writeFile(
    join(catalogDir, "source_file_xrefs.json"),
    JSON.stringify(sourceFileXrefs, null, 2),
  );
  console.log(`Resolved xrefs for ${sourceFileXrefs.length} source filename strings.`);

  const jsonlPath = join(catalogDir, "functions.jsonl");
  const doneAddresses = new Set();
  if (existsSync(jsonlPath)) {
    const existingLines = readFileSync(jsonlPath, "utf8").split("\n").filter(Boolean);
    for (const line of existingLines) {
      try {
        const row = JSON.parse(line);
        if (row.address) doneAddresses.add(row.address);
      } catch {}
    }
    console.log(`Resuming from ${doneAddresses.size} already-decompiled functions...`);
  }

  console.log(`[4/4] Decompiling ${procedures.length} procedures...`);
  let count = 0;
  const startDecomp = Date.now();
  for (const proc of procedures) {
    count++;
    if (doneAddresses.has(proc.address)) continue;

    let info = null;
    let pseudocode = null;
    let callees = [];
    let callers = [];
    let outgoingRefs = null;
    let error = null;

    try {
      [info, pseudocode, callees, callers, outgoingRefs] = await Promise.all([
        fnCall("procedure_info", { document: null, procedure: proc.address }).catch(() => null),
        fnCall("procedure_pseudo_code", { document: null, procedure: proc.address }).catch(
          (e) => `/* Decompilation failed: ${e.message} */`,
        ),
        fnCall("procedure_callees", { document: null, procedure: proc.address }).catch(() => []),
        fnCall("procedure_callers", { document: null, procedure: proc.address }).catch(() => []),
        fnCall("procedure_references", {
          document: null,
          procedure: proc.address,
          direction: "outgoing",
        }).catch(() => null),
      ]);
    } catch (e) {
      error = String(e);
    }

    const compactRefs = (outgoingRefs?.references ?? [])
      .filter((r) => !(r.target_address ?? "").startsWith("stack:"))
      .map((r) => ({
        source_address: r.source_address,
        target_address: r.target_address,
        type: r.kind?.type ?? null,
      }));

    const record = {
      index: count,
      address: proc.address,
      name: proc.value,
      info,
      callees,
      callers,
      outgoing_references: compactRefs,
      pseudocode,
      error,
    };

    await appendFile(jsonlPath, `${JSON.stringify(record)}\n`);

    if (count % 100 === 0 || count === procedures.length) {
      const elapsed = (Date.now() - startDecomp) / 1000;
      const rate = count / Math.max(elapsed, 0.1);
      console.log(
        `  [${count}/${procedures.length}] (${((count / procedures.length) * 100).toFixed(1)}%) - ${rate.toFixed(1)} fn/s - elapsed ${elapsed.toFixed(1)}s`,
      );
    }
  }
  console.log(`All ${procedures.length} procedures decompiled and saved to ${jsonlPath}!`);
} finally {
  await client.close();
}
