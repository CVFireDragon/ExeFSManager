@echo off
echo IMPORTANT! Place keys.dat at "BuildTools/keys.dat"!
echo.
pause
del ExeFs\main >nul 2>nul
mkdir binaries
make
copy binaries\exefsman.nso ExeFs\main
echo.
BuildTools\hbp\hacbrewpack.exe -k BuildTools\keys.dat --exefsdir=ExeFs --noromfs --nologo --controldir=Control --nspdir=binaries
ren binaries\0104020706000112.nsp exefsman.nsp
del binaries\exefsman.elf >nul 2>nul
del binaries\exefsman.pfs0 >nul 2>nul
del binaries\exefsman.nso >nul 2>nul
del binaries\exefsman.nacp >nul 2>nul
echo Done Building! You can find your compiled Binaries in the 'binaries' folder.
echo.
pause
