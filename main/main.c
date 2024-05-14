/**
 * @file main.c
 * @author hemanre
 * @date 13 12 2023
 * @brief Main file for project - roPaw
 *
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "esp_sleep.h"
#include "esp_event.h"
#include "driver/rtc_io.h"
#include "soc/rtc_cntl_reg.h"
#include "soc/sens_reg.h"
#include "soc/rtc.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "esp_log.h"
#include "main.h"

#include "ctrl/ir_rec_ctrl.h"
#include "drivers/lcd_drvr.h"
#include "drivers/motor_drvr.h"

static const char *TAG = "main";

/*!
 * @brief The main function. Called at start-up
 */
void app_main() {
	char FIRMWARE_VERSION[10];

	printf("\n********************************************************************************\n");
	printf("\nroPaw by hemanre\n");
	sprintf(FIRMWARE_VERSION, "v%d.%d.%d", FW_VERSION_MAJOR, FW_VERSION_MINOR, FW_VERSION_MINOR2);
	printf("\nFimware %s\n", FIRMWARE_VERSION);
	printf("\n********************************************************************************\n");

	// Initialize all drivers
	lcd_drvr_init();
//  motor_drvr_init();
//
//	ir_rec_drvr_init();

	ESP_LOGI(TAG, "Init done.");
}


