@echo off
echo Building MegaMan3Recomp...
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64

set CMAKE="C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
cd /d F:\Projects\nesrecomp-release\megaman3

if "%1"=="clean" (
    echo Cleaning build directory...
    if exist build rmdir /s /q build
)

if not exist build\CMakeCache.txt (
    %CMAKE% -S . -B build -G "Visual Studio 17 2022" -A x64 -DENABLE_NESTOPIA_ORACLE=OFF
    echo cmake configure done, errorlevel=%errorlevel%
)

%CMAKE% --build build --config Release
echo cmake build done, errorlevel=%errorlevel%

if not exist build\Release\rom.cfg (
    echo F:\Projects\nesrecomp-release\megaman3\Mega-Man 3 # NES.NES> build\Release\rom.cfg
)
if not exist build\Release\debug.ini (
    echo enabled=1> build\Release\debug.ini
)

if exist build\Release\MegaMan3Recomp.exe (
    echo BUILD SUCCESS
    dir build\Release\MegaMan3Recomp.exe
) else (
    echo BUILD FAILED
)
