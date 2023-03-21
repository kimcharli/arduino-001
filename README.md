# ardunio 001


## VS code setup

Install PlatformIO extension
https://platformio.org/install/ide?install=vscode

'''
brew info platformio
'''

browse pio boards

```
ckim@ckim-mbp arduino-001 % pio boards esp32dev

Platform: espressif32
=====================================================================================================================================================================================================================================
ID               MCU    Frequency    Flash    RAM    Name
---------------  -----  -----------  -------  -----  --------------------------
esp32dev         ESP32  240MHz       4MB      320KB  Espressif ESP32 Dev Module
mhetesp32devkit  ESP32  240MHz       4MB      320KB  MH ET LIVE ESP32DevKIT
ckim@ckim-mbp arduino-001 % 
```


## create project honepot

```
ckim@ckim-mbp arduino-001 % mkdir honeypot
ckim@ckim-mbp arduino-001 % cd honeypot 
ckim@ckim-mbp honeypot % pio project init --board esp32dev 

The current working directory /Users/ckim/Projects/arduino-001/honeypot will be used for the project.

The next files/directories have been created in /Users/ckim/Projects/arduino-001/honeypot
include - Put project header files here
lib - Put here project specific (private) libraries
src - Put project source files here
platformio.ini - Project Configuration File
Resolving esp32dev dependencies...
Already up-to-date.

Project has been successfully initialized! Useful commands:
`pio run` - process/build project from the current directory
`pio run --target upload` or `pio run -t upload` - upload firmware to a target
`pio run --target clean` - clean project (remove compiled files)
`pio run --help` - additional information
ckim@ckim-mbp honeypot % 
```

Create a file src/main.cpp


push reset button on the board and run this.
```
ckim@ckim-mbp honeypot % pio run --target upload
Processing esp32dev (platform: espressif32; board: esp32dev; framework: arduino)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Verbose mode can be enabled via `-v, --verbose` option
CONFIGURATION: https://docs.platformio.org/page/boards/espressif32/esp32dev.html
PLATFORM: Espressif 32 (6.1.0) > Espressif ESP32 Dev Module
HARDWARE: ESP32 240MHz, 320KB RAM, 4MB Flash
DEBUG: Current (cmsis-dap) External (cmsis-dap, esp-bridge, esp-prog, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa)
PACKAGES: 
 - framework-arduinoespressif32 @ 3.20007.0 (2.0.7) 
 - tool-esptoolpy @ 1.40500.0 (4.5.0) 
 - tool-mkfatfs @ 2.0.1 
 - tool-mklittlefs @ 1.203.210628 (2.3) 
 - tool-mkspiffs @ 2.230.0 (2.30) 
 - toolchain-xtensa-esp32 @ 8.4.0+2021r2-patch5
LDF: Library Dependency Finder -> https://bit.ly/configure-pio-ldf
LDF Modes: Finder ~ chain, Compatibility ~ soft
Found 33 compatible libraries
Scanning dependencies...
Dependency Graph
|-- WiFi @ 2.0.0
Building in release mode
Retrieving maximum program size .pio/build/esp32dev/firmware.elf
Checking size .pio/build/esp32dev/firmware.elf
Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"
RAM:   [=         ]  13.4% (used 44052 bytes from 327680 bytes)
Flash: [======    ]  56.0% (used 734465 bytes from 1310720 bytes)
Configuring upload protocol...
AVAILABLE: cmsis-dap, esp-bridge, esp-prog, espota, esptool, iot-bus-jtag, jlink, minimodule, olimex-arm-usb-ocd, olimex-arm-usb-ocd-h, olimex-arm-usb-tiny-h, olimex-jtag-tiny, tumpa
CURRENT: upload_protocol = esptool
Looking for upload port...
Auto-detected: /dev/cu.usbserial-110
Uploading .pio/build/esp32dev/firmware.bin
esptool.py v4.5
Serial port /dev/cu.usbserial-110
Connecting.........
Chip is ESP32-D0WD-V3 (revision v3.0)
Features: WiFi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None
Crystal is 40MHz
MAC: c0:49:ef:cc:37:e4
Uploading stub...
Running stub...
Stub running...
Changing baud rate to 460800
Changed.
Configuring flash size...
Flash will be erased from 0x00001000 to 0x00005fff...
Flash will be erased from 0x00008000 to 0x00008fff...
Flash will be erased from 0x0000e000 to 0x0000ffff...
Flash will be erased from 0x00010000 to 0x000c4fff...
Compressed 17488 bytes to 12168...
Writing at 0x00001000... (100 %)
Wrote 17488 bytes (12168 compressed) at 0x00001000 in 0.5 seconds (effective 270.9 kbit/s)...
Hash of data verified.
Compressed 3072 bytes to 146...
Writing at 0x00008000... (100 %)
Wrote 3072 bytes (146 compressed) at 0x00008000 in 0.0 seconds (effective 499.8 kbit/s)...
Hash of data verified.
Compressed 8192 bytes to 47...
Writing at 0x0000e000... (100 %)
Wrote 8192 bytes (47 compressed) at 0x0000e000 in 0.1 seconds (effective 754.0 kbit/s)...
Hash of data verified.
Compressed 740208 bytes to 480187...
Writing at 0x00010000... (3 %)
Writing at 0x0001c143... (6 %)
Writing at 0x00026c89... (10 %)
Writing at 0x00031b7c... (13 %)
Writing at 0x000371d5... (16 %)
Writing at 0x0003c8e2... (20 %)
Writing at 0x00041e47... (23 %)
Writing at 0x00047079... (26 %)
Writing at 0x0004c210... (30 %)
Writing at 0x0005145f... (33 %)
Writing at 0x0005679e... (36 %)
Writing at 0x0005ba0f... (40 %)
Writing at 0x00060dc9... (43 %)
Writing at 0x0006602d... (46 %)
Writing at 0x0006ba55... (50 %)
Writing at 0x00071253... (53 %)
Writing at 0x0007672a... (56 %)
Writing at 0x0007b94f... (60 %)
Writing at 0x00080d6a... (63 %)
Writing at 0x00086350... (66 %)
Writing at 0x0008b98b... (70 %)
Writing at 0x000910d2... (73 %)
Writing at 0x00096ecf... (76 %)
Writing at 0x0009c7fe... (80 %)
Writing at 0x000a4de3... (83 %)
Writing at 0x000ad1cd... (86 %)
Writing at 0x000b2394... (90 %)
Writing at 0x000b7fcf... (93 %)
Writing at 0x000bd5ee... (96 %)
Writing at 0x000c2e83... (100 %)
Wrote 740208 bytes (480187 compressed) at 0x00010000 in 12.1 seconds (effective 489.3 kbit/s)...
Hash of data verified.

Leaving...
Hard resetting via RTS pin...
=================================================================================================== [SUCCESS] Took 18.93 seconds ===================================================================================================
ckim@ckim-mbp honeypot % 

```






