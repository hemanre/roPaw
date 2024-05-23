| Supported Target  | ESP32-S3 |
| ----------------- | -------- |

# RoPaw

Remote Controlled dual motor pet ;-) project 

## Setup

### Hardware Required

* Olimex ESP32-S3 development board
* A USB cable for power supply and programming

### ESP-IDF

Version 5.2.1

### Espressif-IDE

version: IEP 2.12.1
Download: https://github.com/espressif/idf-eclipse-plugin --> espressif-ide-setup-2.12.1-with-esp-idf-5.2.exe 

### Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

(To exit the serial monitor, type ``Ctrl-]``.)

See the Getting Started Guide for full steps to configure and use ESP-IDF to build projects.

## Expected Output

```
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2a (SPI_FAST_FLASH_BOOT)
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fce3810,len:0x178c
load:0x403c9700,len:0x4
load:0x403c9704,len:0xcbc
load:0x403cc700,len:0x2d98
entry 0x403c9914
I (27) boot: ESP-IDF v5.2-dirty 2nd stage bootloader
I (27) boot: compile time May 23 2024 17:09:42
I (27) boot: Multicore bootloader
I (30) boot: chip revision: v0.1
I (34) boot.esp32s3: Boot SPI Speed : 80MHz
I (39) boot.esp32s3: SPI Mode       : DIO
I (44) boot.esp32s3: SPI Flash Size : 2MB
I (48) boot: Enabling RNG early entropy source...
I (54) boot: Partition Table:
I (57) boot: ## Label            Usage          Type ST Offset   Length
I (65) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (72) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (80) boot:  2 factory          factory app      00 00 00010000 00100000
I (87) boot: End of partition table
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c030020 size=16cc4h ( 93380) map
I (116) esp_image: segment 1: paddr=00026cec vaddr=3fc95500 size=02ca0h ( 11424) load
I (119) esp_image: segment 2: paddr=00029994 vaddr=40374000 size=06684h ( 26244) load
I (128) esp_image: segment 3: paddr=00030020 vaddr=42000020 size=27b68h (162664) map
I (160) esp_image: segment 4: paddr=00057b90 vaddr=4037a684 size=0ade4h ( 44516) load
I (177) boot: Loaded app from partition at offset 0x10000
I (177) boot: Disabling RNG early entropy source...
I (188) cpu_start: Multicore app
I (198) cpu_start: Pro cpu start user code
I (198) cpu_start: cpu freq: 160000000 Hz
I (198) cpu_start: Application information:
I (201) cpu_start: Project name:     oneshot_read
I (206) cpu_start: App version:      09cfcb8-dirty
I (212) cpu_start: Compile time:     May 23 2024 17:09:33
I (218) cpu_start: ELF file SHA256:  9ab0fa59152b1ab7...
I (224) cpu_start: ESP-IDF:          v5.2-dirty
I (229) cpu_start: Min chip rev:     v0.0
I (234) cpu_start: Max chip rev:     v0.99
I (239) cpu_start: Chip rev:         v0.1
I (244) heap_init: Initializing. RAM available for dynamic allocation:
I (251) heap_init: At 3FC990D0 len 00050640 (321 KiB): RAM
I (257) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (263) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (269) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (276) spi_flash: detected chip: generic
I (280) spi_flash: flash io: dio
W (284) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (297) sleep: Configure to isolate all GPIO pins in sleep state
I (304) sleep: Enable automatic switching of GPIO sleep configuration
I (311) main_task: Started on CPU0
I (315) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v1.0.0

********************************************************************************
I (338) gpio: GPIO[5]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0
I (346) gpio: GPIO[7]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0
I (355) gpio: GPIO[17]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0
I (565) lcd_drvr:
ILI9341 detected.

I (565) lcd_drvr: LCD ILI9341 initialization.

I (905) ImageDec: JPEG image decoded! Size of the decoded image is: 320px x 208px
```
