@echo off
cls

mkdir ..\build
pushd ..\build
echo "pushd ..\build"

cl -Zi  "..\code\handmade.cpp" user32.lib

devenv handmade.exe

popd 