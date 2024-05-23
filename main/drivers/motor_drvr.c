/*
 * motor_drvr.c
 *
 *  Created on: 16 Dec 2023
 *      Author: hemanre
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "driver/ledc.h"
#include "gpios.h"
#include "esp_err.h"
#include "esp_log.h"
#include "drivers/motor_drvr.h"

#define MTR_A_DUTY    4095 // duty = 50%. (2^13) * 50% = 4096
#define MTR_B_DUTY    4095

static ledc_timer_config_t ledc_timer;
static ledc_channel_config_t ledc_channel_0;
static ledc_channel_config_t ledc_channel_1;
static ledc_channel_config_t ledc_channel_2;
static ledc_channel_config_t ledc_channel_3;

static const char *TAG = "mtr_drvr";

// *********************Look-up table for Motor direction**********************************************
// ----------------------------------------------------------------------------------------------------
// GPIO_MTR_IN1   | GPIO_MTR_IN2   | GPIO_MTR_IN3   | GPIO_MTR_IN4   | direction
// ---------------|----------------|----------------|----------------|---------------------------------
// 		0		  |		  0		   |	    0		|		0		 | halt
// 		1		  |		  0		   |		0		|		1		 | straight forward
// 		0		  |		  1		   |		1		|		0		 | straight backward
// 		1		  |		  0		   |		0		|		0		 | rotate clockwise forward
// 		0		  |		  1		   |		0		|		0		 | rotate clockwise backward
// 		0		  |		  0		   |		1		|		0		 | rotate anti-clockwise forward
// 		0		  |		  0		   |		0		|		1		 | rotate anti-clockwise forward

// ************************* Helper functions **********************************************************

// test function

void motor_drvr_set_dir(uint8_t dir){
	ESP_LOGI(TAG,"Motor direction: %d\n", dir);
	switch (dir){
		case mtr_cmd_stop:
			motor_drvr_set_pwm(0,0,0,0);
			break;
		case mtr_cmd_fwd:
			motor_drvr_set_pwm(MTR_A_DUTY,0,0,MTR_A_DUTY);
			break;
		case mtr_cmd_bwd:
			motor_drvr_set_pwm(0,MTR_A_DUTY,MTR_A_DUTY,0);
			break;
		case mtr_cmd_left:
			motor_drvr_set_pwm(MTR_A_DUTY,0,0,0);
			break;
		// todos
		case mtr_cmd_right:
			motor_drvr_set_pwm(0,0,0,0);
			break;
		case mtr_cmd_clk_fwd:
			motor_drvr_set_pwm(0,0,0,0);
			break;
		case mtr_cmd_aclk_bwd:
			motor_drvr_set_pwm(0,0,0,0);
			break;
		case mtr_cmd_clk_bwd:
			motor_drvr_set_pwm(0,0,0,0);
			break;
		default:
			ESP_LOGI(TAG,"Unlisted cmd");
			break;
	}
}

void motor_drvr_set_pwm(uint32_t chnl_0_pwm, uint32_t chnl_1_pwm, uint32_t chnl_2_pwm, uint32_t chnl_3_pwm){
    // Set duty to 50%
    ESP_ERROR_CHECK(ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, chnl_0_pwm));
    // Update duty to apply the new value
    ESP_ERROR_CHECK(ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0));
    // Set duty to 50%
	ESP_ERROR_CHECK(ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1, chnl_1_pwm));
	// Update duty to apply the new value
	ESP_ERROR_CHECK(ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_1));
	// Set duty to 50%
	ESP_ERROR_CHECK(ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_2, chnl_2_pwm));
	// Update duty to apply the new value
	ESP_ERROR_CHECK(ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_2));
	// Set duty to 50%
	ESP_ERROR_CHECK(ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_3, chnl_3_pwm));
	// Update duty to apply the new value
	ESP_ERROR_CHECK(ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_3));
}

// ******************************** Driver initialization *********************************************

int8_t motor_drvr_init(void)
{
	esp_err_t retVal = ESP_FAIL;
    // Prepare and then apply the LEDC PWM timer configuration
	ledc_timer.speed_mode       = LEDC_LOW_SPEED_MODE;
	ledc_timer.timer_num        = LEDC_TIMER_0;
	ledc_timer.duty_resolution  = LEDC_TIMER_13_BIT;
	ledc_timer.freq_hz          = 4000;  // Set output frequency at 4 kHz
	ledc_timer.clk_cfg          = LEDC_AUTO_CLK;

    retVal = ledc_timer_config(&ledc_timer);

    // Prepare and then apply the LEDC PWM channel configuration
    if(retVal == ESP_OK){
    	ledc_channel_0.speed_mode     = LEDC_LOW_SPEED_MODE;
    	ledc_channel_0.channel        = LEDC_CHANNEL_0;
		ledc_channel_0.timer_sel      = LEDC_TIMER_0;
		ledc_channel_0.intr_type      = LEDC_INTR_DISABLE;
		ledc_channel_0.gpio_num       = GPIO_MTR_IN1;
		ledc_channel_0.duty           = 0; // Set duty to 0%
		ledc_channel_0.hpoint         = 0;

		retVal = ledc_channel_config(&ledc_channel_0);
    }
    if(retVal == ESP_OK){
		ledc_channel_1.speed_mode     = LEDC_LOW_SPEED_MODE;
		ledc_channel_1.channel        = LEDC_CHANNEL_1;
		ledc_channel_1.timer_sel      = LEDC_TIMER_0;
		ledc_channel_1.intr_type      = LEDC_INTR_DISABLE;
		ledc_channel_1.gpio_num       = GPIO_MTR_IN2;
		ledc_channel_1.duty           = 0; // Set duty to 0%
		ledc_channel_1.hpoint         = 0;

		retVal = ledc_channel_config(&ledc_channel_1);
    }
    if(retVal == ESP_OK){
    	ledc_channel_2.speed_mode     = LEDC_LOW_SPEED_MODE;
		ledc_channel_2.channel        = LEDC_CHANNEL_2;
		ledc_channel_2.timer_sel      = LEDC_TIMER_0;
		ledc_channel_2.intr_type      = LEDC_INTR_DISABLE;
		ledc_channel_2.gpio_num       = GPIO_MTR_IN3;
		ledc_channel_2.duty           = 0; // Set duty to 0%
		ledc_channel_2.hpoint         = 0;

		retVal = ledc_channel_config(&ledc_channel_2);
	}
    if(retVal == ESP_OK){
    	ledc_channel_3.speed_mode     = LEDC_LOW_SPEED_MODE;
		ledc_channel_3.channel        = LEDC_CHANNEL_3;
		ledc_channel_3.timer_sel      = LEDC_TIMER_0;
		ledc_channel_3.intr_type      = LEDC_INTR_DISABLE;
		ledc_channel_3.gpio_num       = GPIO_MTR_IN4;
		ledc_channel_3.duty           = 0; // Set duty to 0%
		ledc_channel_3.hpoint         = 0;

		retVal = ledc_channel_config(&ledc_channel_3);
	}
	return retVal;
}
