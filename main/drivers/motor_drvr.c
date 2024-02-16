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
#include "gpios.h"

#define GPIO_OUTPUT_PIN_SEL  ((1ULL<<GPIO_MTR_L_FWD) | (1ULL<<GPIO_MTR_L_BWD) | (1ULL<<GPIO_MTR_R_FWD) | (1ULL<<GPIO_MTR_R_BWD))

#define ESP_INTR_FLAG_DEFAULT 0

// *********************Look-up table for Motor direction**********************************************
// ----------------------------------------------------------------------------------------------------
// GPIO_MTR_L_FWD | GPIO_MTR_L_BWD | GPIO_MTR_R_FWD | GPIO_MTR_R_BWD | direction
// ---------------|----------------|----------------|----------------|---------------------------------
// 		0		  |		  0		   |	    0		|		0		 |    halt
// 		1		  |		  0		   |		1		|		0		 | straight forward
// 		0		  |		  1		   |		0		|		1		 | straight backward
// 		1		  |		  0		   |		0		|		0		 | rotate clockwise forward
// 		0		  |		  1		   |		0		|		0		 | rotate clockwise backward
// 		0		  |		  0		   |		1		|		0		 | rotate anti-clockwise forward
// 		0		  |		  0		   |		0		|		1		 | rotate anti-clockwise forward

// ************************* Helper functions **********************************************************

void motor_drvr_clkwise_fwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 1);
    gpio_set_level(GPIO_MTR_L_BWD, 0);
    gpio_set_level(GPIO_MTR_R_FWD, 0);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

void motor_drvr_clkwise_bwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 0);
    gpio_set_level(GPIO_MTR_L_BWD, 1);
    gpio_set_level(GPIO_MTR_R_FWD, 0);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

void motor_drvr_anticlkwise_fwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 0);
    gpio_set_level(GPIO_MTR_L_BWD, 0);
    gpio_set_level(GPIO_MTR_R_FWD, 1);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

void motor_drvr_anticlkwise_bwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 0);
    gpio_set_level(GPIO_MTR_L_BWD, 1);
    gpio_set_level(GPIO_MTR_R_FWD, 0);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

void motor_drvr_straight_fwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 1);
    gpio_set_level(GPIO_MTR_L_BWD, 0);
    gpio_set_level(GPIO_MTR_R_FWD, 1);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

void motor_drvr_straight_bwd(void){
    gpio_set_level(GPIO_MTR_L_FWD, 0);
    gpio_set_level(GPIO_MTR_L_BWD, 1);
    gpio_set_level(GPIO_MTR_R_FWD, 0);
    gpio_set_level(GPIO_MTR_R_BWD, 1);
}

void motor_drvr_halt(void){
    gpio_set_level(GPIO_MTR_L_FWD, 0);
    gpio_set_level(GPIO_MTR_L_BWD, 0);
    gpio_set_level(GPIO_MTR_R_FWD, 0);
    gpio_set_level(GPIO_MTR_R_BWD, 0);
}

// test function

void motor_drvr_generic(uint8_t l_fwd, uint8_t l_bwd, uint8_t r_fwd, uint8_t r_bwd){
    gpio_set_level(GPIO_MTR_L_FWD, l_fwd);
    gpio_set_level(GPIO_MTR_L_BWD, l_bwd);
    gpio_set_level(GPIO_MTR_R_FWD, r_fwd);
    gpio_set_level(GPIO_MTR_R_BWD, r_bwd);
}

// ******************************** Driver initialization *********************************************

void motor_drvr_init(void)
{
    //zero-initialize the config structure.
    gpio_config_t io_conf = {};
    //disable interrupt
    io_conf.intr_type = GPIO_INTR_DISABLE;
    //set as output mode
    io_conf.mode = GPIO_MODE_OUTPUT;
    //bit mask of the pins that you want to set,e.g.GPIO18/19
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;
    //disable pull-down mode
    io_conf.pull_down_en = 0;
    //disable pull-up mode
    io_conf.pull_up_en = 0;
    //configure GPIO with the given settings
    gpio_config(&io_conf);

//	printf("\n1\n");
//	motor_drvr_generic(1,0,0,0);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
//	printf("\n2\n");
//	motor_drvr_generic(0,1,0,0);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
//	printf("\n3\n");
//	motor_drvr_generic(0,0,1,0);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
//	printf("\n4\n");
//	motor_drvr_generic(0,0,0,1);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
//
//	printf("\n5\n");
//	motor_drvr_generic(1,0,1,0);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
//	printf("\n6\n");
//	motor_drvr_generic(0,1,0,1);
//	vTaskDelay(4000);
//	motor_drvr_generic(0,0,0,0);
//	vTaskDelay(1000);
}


