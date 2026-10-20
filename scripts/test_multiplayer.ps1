Set-Location "C:\Users\Merlin\workspace\Dungeon Keeper"
Write-Host "Launching Host..."
$hostProc = Start-Process -FilePath ".\keeper_win32.exe" -ArgumentList "--host 5556 --max-frames 45 -nosound" -PassThru -NoNewWindow
Start-Sleep -Seconds 1

Write-Host "Launching Client..."
$clientProc = Start-Process -FilePath ".\keeper_win32.exe" -ArgumentList "--connect 127.0.0.1:5556 --player-name UnderlordBob --max-frames 35 -nosound" -PassThru -NoNewWindow

$hostProc.WaitForExit(8000)
$clientProc.WaitForExit(8000)
Write-Host "Both processes finished cleanly."
