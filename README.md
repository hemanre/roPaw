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
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  8d857051b92cb05d...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  8d857051b92cb05d...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  35cb4845ea1df7a5...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  35cb4845ea1df7a5...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d10ch (119052) map
I (138) esp_image: segment 3: paddr=0003d134 vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d348 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  45093fc712171ee9...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  99a56b3d2fbde2ce...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  f4396ee64802e37d...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  f4396ee64802e37d...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  5e40e687c8b73923...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  fbe5a02c3a29ff22...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c020020 size=0d8e4h ( 55524) map
I (110) esp_image: segment 1: paddr=0001d90c vaddr=3fc91f00 size=0270ch (  9996) load
I (112) esp_image: segment 2: paddr=00020020 vaddr=42000020 size=1d114h (119060) map
I (138) esp_image: segment 3: paddr=0003d13c vaddr=3fc9460c size=0020ch (   524) load
I (138) esp_image: segment 4: paddr=0003d350 vaddr=40374000 size=0dee4h ( 57060) load
I (162) boot: Loaded app from partition at offset 0x10000
I (162) boot: Disabling RNG early entropy source...
I (173) cpu_start: Multicore app
I (183) cpu_start: Pro cpu start user code
I (183) cpu_start: cpu freq: 160000000 Hz
I (183) cpu_start: Application information:
I (186) cpu_start: Project name:     oneshot_read
I (191) cpu_start: App version:      09cfcb8-dirty
I (197) cpu_start: Compile time:     May 23 2024 17:09:33
I (203) cpu_start: ELF file SHA256:  3c72911e289d7d62...
I (209) cpu_start: ESP-IDF:          v5.2-dirty
I (214) cpu_start: Min chip rev:     v0.0
I (219) cpu_start: Max chip rev:     v0.99 
I (224) cpu_start: Chip rev:         v0.1
I (228) heap_init: Initializing. RAM available for dynamic allocation:
I (236) heap_init: At 3FC951B8 len 00054558 (337 KiB): RAM
I (242) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (248) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (254) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (261) spi_flash: detected chip: generic
I (265) spi_flash: flash io: dio
W (269) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (282) sleep: Configure to isolate all GPIO pins in sleep state
I (289) sleep: Enable automatic switching of GPIO sleep configuration
I (296) main_task: Started on CPU0
I (300) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
/nhello/nI (323) mtr_drvr: 5

I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

I (15326) main: Init done.
I (15326) main_task: Returned from app_main()
None
Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect......................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect...............................................................................................................................................................................................................................................................................................................................................................................Waiting for the device to reconnect.................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
.................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
..............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
I (5326) mtr_drvr: 6

I (10326) mtr_drvr: 7

â†�[0;33m--- esp-idf-monitor 1.4.0 on \\.\COM3 115200 ---â†�[0m
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0x1 (POWERON),boot:0x2b (SPI_FAST_FLASH_BOOT)
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
I (91) esp_image: segment 0: paddr=00010020 vaddr=3c030020 size=14f94h ( 85908) map
I (115) esp_image: segment 1: paddr=00024fbc vaddr=3fc94600 size=02bf0h ( 11248) load
I (118) esp_image: segment 2: paddr=00027bb4 vaddr=40374000 size=08464h ( 33892) load
I (128) esp_image: segment 3: paddr=00030020 vaddr=42000020 size=23aa0h (146080) map
I (156) esp_image: segment 4: paddr=00053ac8 vaddr=4037c464 size=080cch ( 32972) load
I (170) boot: Loaded app from partition at offset 0x10000
I (170) boot: Disabling RNG early entropy source...
I (181) cpu_start: Multicore app
I (191) cpu_start: Pro cpu start user code
I (191) cpu_start: cpu freq: 160000000 Hz
I (191) cpu_start: Application information:
I (194) cpu_start: Project name:     oneshot_read
I (199) cpu_start: App version:      09cfcb8-dirty
I (205) cpu_start: Compile time:     May 23 2024 17:09:33
I (211) cpu_start: ELF file SHA256:  a7bf8ec57cb3248a...
I (217) cpu_start: ESP-IDF:          v5.2-dirty
I (222) cpu_start: Min chip rev:     v0.0
I (227) cpu_start: Max chip rev:     v0.99 
I (232) cpu_start: Chip rev:         v0.1
I (236) heap_init: Initializing. RAM available for dynamic allocation:
I (244) heap_init: At 3FC98100 len 00051610 (325 KiB): RAM
I (250) heap_init: At 3FCE9710 len 00005724 (21 KiB): RAM
I (256) heap_init: At 3FCF0000 len 00008000 (32 KiB): DRAM
I (262) heap_init: At 600FE010 len 00001FD8 (7 KiB): RTCRAM
I (269) spi_flash: detected chip: generic
I (273) spi_flash: flash io: dio
W (277) spi_flash: Detected size(8192k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (290) sleep: Configure to isolate all GPIO pins in sleep state
I (297) sleep: Enable automatic switching of GPIO sleep configuration
I (304) main_task: Started on CPU0
I (308) main_task: Calling app_main()

********************************************************************************

roPaw by hemanre

Fimware v0.1.0

********************************************************************************
I (331) gpio: GPIO[5]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (339) gpio: GPIO[7]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
I (348) gpio: GPIO[17]| InputEn: 0| OutputEn: 1| OpenDrain: 0| Pullup: 1| Pulldown: 0| Intr:0 
LCD ID: 00000000
ILI9341 detected.
LCD ILI9341 initialization.
I (897) ImageDec: JPEG image decoded! Size of the decoded image is: 320px x 208px
```
