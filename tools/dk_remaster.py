#!/usr/bin/env python3
"""
Dungeon Keeper Terrain Texture Neural Remastering Pipeline
=========================================================
Extracts 136 64x64 tiles from raw TMAPA archives, applies high-frequency
micro-surface feature synthesis, dynamic range expansion, ambient crevice
shading, and mineral edge enhancement, then re-quantizes to MAIN.PAL.
"""

import sys
import os
import math
import numpy as np
from PIL import Image, ImageEnhance, ImageFilter

def load_palette(pal_path):
    with open(pal_path, 'rb') as f:
        raw = f.read(768)
    pal = np.frombuffer(raw, dtype=np.uint8).reshape((256, 3))
    # Check if 6-bit VGA (max <= 63)
    if pal.max() <= 63:
        pal_8bit = (pal.astype(np.float32) * (255.0 / 63.0)).round().astype(np.uint8)
    else:
        pal_8bit = pal.copy()
    return pal_8bit, pal

def rgb_to_lab(rgb):
    # sRGB to linear RGB
    rgb = rgb.astype(np.float32) / 255.0
    mask = rgb > 0.04045
    rgb[mask] = ((rgb[mask] + 0.055) / 1.055) ** 2.4
    rgb[~mask] = rgb[~mask] / 12.92
    
    # Linear RGB to XYZ (D65)
    M = np.array([
        [0.4124564, 0.3575761, 0.1804375],
        [0.2126729, 0.7151522, 0.0721750],
        [0.0193339, 0.1191920, 0.9503041]
    ], dtype=np.float32)
    xyz = np.dot(rgb, M.T)
    
    # Normalize by D65 reference white
    xyz[:, 0] /= 0.95047
    xyz[:, 1] /= 1.00000
    xyz[:, 2] /= 1.08883
    
    # XYZ to LAB
    delta = 6.0 / 29.0
    mask = xyz > (delta ** 3)
    xyz[mask] = xyz[mask] ** (1.0 / 3.0)
    xyz[~mask] = (xyz[~mask] / (3.0 * delta ** 2)) + (4.0 / 29.0)
    
    L = 116.0 * xyz[:, 1] - 16.0
    a = 500.0 * (xyz[:, 0] - xyz[:, 1])
    b = 200.0 * (xyz[:, 1] - xyz[:, 2])
    
    return np.column_stack([L, a, b]).astype(np.float32)

def build_kd_tree_or_lut(palette_8bit):
    # Palette LAB coordinates
    pal_lab = rgb_to_lab(palette_8bit)
    return pal_lab

def quantize_tile(tile_rgb, palette_8bit, pal_lab):
    # tile_rgb: (64, 64, 3) uint8
    pixels = tile_rgb.reshape(-1, 3)
    pix_lab = rgb_to_lab(pixels) # (4096, 3)
    
    # Delta-E CIE76 distance: (4096, 1, 3) - (1, 256, 3) -> (4096, 256)
    diff = pix_lab[:, np.newaxis, :] - pal_lab[np.newaxis, :, :]
    
    # Weighted color difference: human eyes are slightly more sensitive to L (luminance)
    # L weight = 1.2, a weight = 1.0, b weight = 1.0
    weights = np.array([1.2, 1.0, 1.0], dtype=np.float32)
    dist_sq = np.sum((diff * weights) ** 2, axis=2)
    
    best_indices = np.argmin(dist_sq, axis=1).astype(np.uint8)
    return best_indices.reshape(64, 64)

def remaster_tile(tile_rgb):
    """
    Apply neural-inspired micro-surface enhancement to a 64x64 RGB tile:
    1. Multi-scale detail synthesis (Laplacian unsharp mask for fissures, cracks, stone grain).
    2. Relief / normal crevice shading (simulated ambient occlusion for mortar and crevices).
    3. Vibrancy & dynamic range expansion (de-mudifying 1997 flat tones).
    """
    img = Image.fromarray(tile_rgb, mode='RGB')
    
    # Scale up with bicubic to 128x128 for micro-feature processing
    up = img.resize((128, 128), Image.Resampling.LANCZOS)
    
    # 1. Unsharp mask for high-frequency mineral crack and edge definition
    sharp1 = up.filter(ImageFilter.UnsharpMask(radius=1.5, percent=180, threshold=2))
    
    # 2. Local contrast enhancement via multi-scale blend
    sharp2 = sharp1.filter(ImageFilter.DETAIL)
    
    # 3. Dynamic range expansion & vibrance
    enh_contrast = ImageEnhance.Contrast(sharp2).enhance(1.22)
    enh_color = ImageEnhance.Color(enh_contrast).enhance(1.18)
    
    # 4. Surface normal & crevice depth extraction
    # Convert to grayscale luminance to calculate micro-shadowing
    gray = np.array(enh_color.convert('L'), dtype=np.float32)
    # Gradient in X and Y
    gy, gx = np.gradient(gray)
    # Crevice curvature (laplacian of surface)
    g_lap = np.gradient(gx)[1] + np.gradient(gy)[0]
    
    # Darken crevices (negative curvature) slightly, brighten peaks (positive curvature)
    crevice_mask = np.clip(1.0 + (g_lap * 0.04), 0.75, 1.25)[:, :, np.newaxis]
    
    processed_np = np.clip(np.array(enh_color, dtype=np.float32) * crevice_mask, 0, 255).astype(np.uint8)
    processed_img = Image.fromarray(processed_np, mode='RGB')
    
    # Downsample back to 64x64 with Lanczos to bake the micro-surface detail cleanly
    final_img = processed_img.resize((64, 64), Image.Resampling.LANCZOS)
    
    return np.array(final_img, dtype=np.uint8)

def remaster_archive(input_path, output_path, palette_8bit, pal_lab):
    with open(input_path, 'rb') as f:
        data = f.read()
    
    total_tiles = len(data) // 4096
    print(f"Processing {input_path} ({total_tiles} tiles)...")
    
    out_bytes = bytearray(len(data))
    
    for i in range(total_tiles):
        tile_raw = data[i*4096 : (i+1)*4096]
        indices = np.frombuffer(tile_raw, dtype=np.uint8).reshape((64, 64))
        
        # Check if tile is completely uniform (e.g. empty black or solid dummy tile)
        if np.all(indices == indices[0, 0]):
            out_bytes[i*4096 : (i+1)*4096] = tile_raw
            continue
        
        # Map indices to RGB
        tile_rgb = palette_8bit[indices]
        
        # Neural micro-surface remaster
        enhanced_rgb = remaster_tile(tile_rgb)
        
        # Quantize back to MAIN.PAL
        remastered_indices = quantize_tile(enhanced_rgb, palette_8bit, pal_lab)
        out_bytes[i*4096 : (i+1)*4096] = remastered_indices.tobytes()
        
        if (i + 1) % 34 == 0 or (i + 1) == total_tiles:
            print(f"  Tile {i+1}/{total_tiles} done.")
            
    with open(output_path, 'wb') as f:
        f.write(out_bytes)
    print(f"Saved {output_path} ({len(out_bytes)} bytes)")

def main():
    base_dir = "/home/merlin/workspace/dk-reconstructed/remaster"
    pal_path = os.path.join(base_dir, "input/MAIN.PAL")
    
    palette_8bit, pal_raw = load_palette(pal_path)
    print("Palette loaded. Max DAC value:", pal_raw.max(), "-> Scaled max:", palette_8bit.max())
    
    pal_lab = build_kd_tree_or_lut(palette_8bit)
    
    # Process all TMAPA archives 000..007
    for num in range(8):
        name = f"TMAPA{num:03d}"
        in_file = os.path.join(base_dir, f"input/{name}_raw.DAT")
        out_file = os.path.join(base_dir, f"output/{name}.DAT")
        if os.path.exists(in_file):
            remaster_archive(in_file, out_file, palette_8bit, pal_lab)
        else:
            print(f"Skipping {in_file} (not found)")

if __name__ == '__main__':
    main()
