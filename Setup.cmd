@echo off
rem reo quick start: checks prerequisites, takes your game files, recompiles and builds.
rem Runs exactly the "Step by step" commands in README.md, skipping steps already done,
rem so running it again after a failure carries on where it stopped.
rem Nothing is downloaded or installed without asking. Your game data stays on this machine.
setlocal EnableExtensions EnableDelayedExpansion
cd /d "%~dp0"
if not exist scratch mkdir scratch
set "LOG=%CD%\scratch\setup.log"
echo reo setup %DATE% %TIME% > "%LOG%"
echo.
echo  reo setup - Resident Evil Outbreak static recompilation
echo  Log: %LOG%
echo.

rem ---- 1. Prerequisites ---------------------------------------------------------
set MISSING=0
where git >nul 2>&1 || (call :need "Git" "about 60 MB" "https://git-scm.com/download/win" & set MISSING=1)

set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
set "VSPATH="
if exist "%VSWHERE%" for /f "usebackq delims=" %%i in (`"%VSWHERE%" -version [17.0^,18.0^) -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "VSPATH=%%i"
if not defined VSPATH (call :need "Visual Studio 2022 with 'Desktop development with C++'" "about 8 GB" "https://visualstudio.microsoft.com/vs/community/" & set MISSING=1)

set "CMAKE=cmake"
where cmake >nul 2>&1 || (if exist "%ProgramFiles%\CMake\bin\cmake.exe" (set "CMAKE=%ProgramFiles%\CMake\bin\cmake.exe") else (call :need "CMake 3.20 or newer" "about 100 MB" "https://cmake.org/download/" & set MISSING=1))

rem py launcher, not "python": the Microsoft Store alias named python opens the Store instead.
py -3 --version >nul 2>&1 || (call :need "Python 3 (python.org installer, includes the py launcher)" "about 30 MB" "https://www.python.org/downloads/windows/" & set MISSING=1)

if %MISSING%==1 (
  echo.
  echo Install the items above, open a NEW window so PATH updates, then run Setup.cmd again.
  pause
  exit /b 1
)
echo [ok] Git, Visual Studio 2022, CMake and Python found.
if /i "%~1"=="--check" exit /b 0

rem ---- 2. PS2Recomp submodule ---------------------------------------------------
if not exist third_party\PS2Recomp\CMakeLists.txt (
  echo [..] Fetching the PS2Recomp submodule
  git submodule update --init --recursive >> "%LOG%" 2>&1 || call :fail "Could not fetch the PS2Recomp submodule; check your internet connection."
)
echo [ok] PS2Recomp submodule present.

rem ---- 3. Your game files -------------------------------------------------------
if not exist game_data\SLUS_207.65 (
  set "SRC="
  for %%d in (D E F G H I J K L M N O P Q R S T U V W X Y Z) do if not defined SRC if exist "%%d:\SLUS_207.65" set "SRC=%%d:\"
  if defined SRC (
    echo Found Resident Evil Outbreak in !SRC!
    set /p "OK=Copy the game files from !SRC! into game_data\? [Y/n] "
    if /i "!OK!"=="n" set "SRC="
  )
  if not defined SRC (
    echo Point me at your Resident Evil Outbreak ^(NTSC-U, SLUS-20765^) disc or extracted disc folder.
    echo It is the folder that holds SLUS_207.65 and the BIN folder.
    set /p "SRC=Folder: "
  )
  if not exist "!SRC!\SLUS_207.65" call :fail "SLUS_207.65 is not in that folder; give the root of the disc or of the extracted ISO."
  if not exist "!SRC!\BIN\0.DAT" call :fail "BIN\0.DAT is not in that folder; copy the whole disc, not just the ELF."
  echo [..] Copying game files into game_data\
  robocopy "!SRC!" game_data /E /NFL /NDL /NJH /NJS >> "%LOG%" 2>&1
  if errorlevel 8 call :fail "Copying the game files failed."
)
echo [ok] Game files in game_data\.

rem ---- 4. Build the toolkit (runtime + recompiler) -------------------------------
set "TK=third_party\PS2Recomp\out\build-upstream"
if not exist "%TK%\CMakeCache.txt" (
  echo [..] Configuring PS2Recomp ^(first run downloads its libraries^)
  "%CMAKE%" -S third_party/PS2Recomp -B %TK% -G "Visual Studio 17 2022" -A x64 -DPS2X_BUILD_STUDIO=OFF -DPS2X_ENABLE_FFMPEG=OFF >> "%LOG%" 2>&1 || call :fail "Configuring PS2Recomp failed."
)
echo [..] Building PS2Recomp ^(runtime, IOP, recompiler^)
"%CMAKE%" --build %TK% --config Release --target ps2_runtime ps2_iop ps2_recomp >> "%LOG%" 2>&1 || call :fail "Building PS2Recomp failed."
echo [ok] PS2Recomp built.

rem ---- 5. Recompile the game (made here, never distributed) ---------------------
if not exist recomp\config\output\register_functions.cpp (
  echo [..] Recompiling SLUS_207.65 ^(a few minutes^)
  rem outbreak.toml plus the base functions the overlays call, read from your BIN\*.DAT
  py -3 -I tools\gen_base_config.py >> "%LOG%" 2>&1 || call :fail "Generating the recompile config failed."
  "%TK%\ps2xRecomp\Release\ps2_recomp.exe" recomp/build/outbreak.generated.toml >> "%LOG%" 2>&1 || call :fail "Recompiling the game ELF failed."
)
rem Overlays: BIN\<n>.DAT -> recomp\config\output_ovl_<name>. 7.DAT does not exist on the disc.
for %%O in (0:submain 1:demo 2:game 3:netwk 4:netdnas 5:insdnas 6:nethttp 8:netaq 9:single) do (
  for /f "tokens=1,2 delims=:" %%A in ("%%O") do (
    if not exist recomp\config\output_ovl_%%B\%%B_register.cpp (
      echo [..] Recompiling overlay %%B ^(BIN\%%A.DAT^)
      py -3 -I tools\gen_overlay.py game_data/BIN/%%A.DAT %%B >> "%LOG%" 2>&1 || call :fail "Recompiling overlay %%B failed."
    )
  )
)
echo [ok] Generated code in recomp\config\output*\.

rem ---- 6. Build the game ----------------------------------------------------------
rem Configure every time: CMake globs the generated files.
echo [..] Configuring reo_recomp
"%CMAKE%" -S recomp -B recomp/build -G "Visual Studio 17 2022" -A x64 >> "%LOG%" 2>&1 || call :fail "Configuring reo_recomp failed."
echo [..] Building reo_recomp ^(the long one: 20-40 minutes, about 2 GB of RAM per compiler job^)
"%CMAKE%" --build recomp/build --config Release --target reo_recomp >> "%LOG%" 2>&1 || call :fail "Building reo_recomp failed."
if not exist recomp\build\Release\reo_recomp.exe call :fail "The build finished but reo_recomp.exe is missing."

rem ---- 7. Launcher ----------------------------------------------------------------
> run-reo.cmd (
  echo @echo off
  echo rem Runs reo. Set REO_HEADLESS=1 first to run without a window.
  echo cd /d "%%~dp0"
  echo recomp\build\Release\reo_recomp.exe --game file1 %%*
)
echo.
echo [done] Double-click run-reo.cmd to start the game.
exit /b 0

:need
echo [missing] %~1 ^(%~2^)
set /p "OPEN=  Open the download page %~3 ? [y/N] "
if /i "%OPEN%"=="y" start "" "%~3"
set "OPEN="
exit /b 0

:fail
echo.
echo [failed] %~1
echo Details are in %LOG%
pause
rem pop the :fail call frame, then leave the script (not the user's window)
(goto) 2>nul & endlocal & exit /b 1
