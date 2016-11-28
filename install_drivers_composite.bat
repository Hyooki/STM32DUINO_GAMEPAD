d@echo off

echo Installing Maple Serial driver...
"%~dp0wdi-simple" --vid 0x0483 --pid 0x5741 --iid 0 --type 3 --name "Maple Serial Interface 0" --dest "%~dp0maple-serial-0"
echo.

pause
