@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
set CMAKE="C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
cd /d F:\Projects\nesrecomp-release\megaman3\nesrecomp
if not exist build\recompiler\CMakeCache.txt (
    %CMAKE% -S recompiler -B build/recompiler -G "Visual Studio 17 2022" -A x64
)
%CMAKE% --build build/recompiler --config Release
echo Recompiler build done, errorlevel=%errorlevel%
dir build\recompiler\Release\NESRecomp.exe 2>nul
