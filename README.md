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

### Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

(To exit the serial monitor, type ``Ctrl-]``.)

See the Getting Started Guide for full steps to configure and use ESP-IDF to build projects.

## Example Output

```
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2a (SPI_FAST_FLASH_BOOT)
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fce3810,len:0x178c
load:0x403c9700,len:0x4
load:0x403c9704,len:0xcc8
load:0x403cc700,len:0x2e68
entry 0x403c9924
I (27) boot: ESP-IDF v5.2.1-dirty 2nd stage bootloader
I (27) boot: compile time May 14 2024 19:54:17
I (27) boot: Multicore bootloader
I (30) boot: chip revision: v0.1
I (34) boot.esp32s3: Boot SPI Speed : 80MHz
I (39) boot.esp32s3: SPI Mode       : DIO
I (44) boot.esp32s3: SPI Flash Size : 2MB
I (49) boot: Enabling RNG early entropy source...
I (54) boot: Partition Table:
I (58) boot: ## Label            Usage          Type ST Offset   Length
I (65) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (72) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (80) boot:  2 factory          factory app      00 00 00010000 00100000
I (87) boot: End of partition table
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c030020 size=125b4h ( 75188) map
I (113) esp_image: segment 1: paddr=000225dc vaddr=3fc94500 size=02a88h ( 10888) load
I (116) esp_image: segment 2: paddr=0002506c vaddr=40374000 size=0afach ( 44972) load
I (129) esp_image: segment 3: paddr=00030020 vaddr=42000020 size=222a0h (139936) map
I (155) esp_image: segment 4: paddr=000522c8 vaddr=4037efac size=0549ch ( 21660) load
I (166) boot: Loaded app from partition at offset 0x10000
I (167) boot: Disabling RNG early entropy source...
I (178) cpu_start: Multicore app
I (188) cpu_start: Pro cpu start user code
I (188) cpu_start: cpu freq: 160000000 Hz
I (188) cpu_start: Application information:
I (191) cpu_start: Project name:     oneshot_read
I (196) cpu_start: App version:      1296836-dirty
I (201) cpu_start: Compile time:     May 14 2024 19:54:09
I (208) cpu_start: ELF file SHA256:  41c589d27aee171b...
I (214) cpu_start: ESP-IDF:          v5.2.1-dirty
I (219) cpu_start: Min chip rev:     v0.0
I (224) cpu_start: Max chip rev:     v0.99 
I (228) cpu_start: Chip rev:         v0.1
I (233) heap_init: Initializing. RAM available for dynamic allocation:
I (241) heap_init: At 3FC97D60 len 000519B0 (326 KiB): RAM
I (247) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (253) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (259) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (266) spi_flash: detected chip: generic
I (270) spi_flash: flash io: dio
W (274) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (287) sleep: Configure to isolate all GPIO pins in sleep state
I (294) sleep: Enable automatic switching of GPIO sleep configuration
I (301) main_task: Started on CPU0
I (305) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
I (328) gpio: GPIO[5]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (336) gpio: GPIO[7]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (345) gpio: GPIO[17]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
LCD ID: 00000000
ILI9341 detected.
LCD ILI9341 initialization.
I (895) ImageDec: JPEG image decoded! Size of the decoded image is: 320px x 208px
```
