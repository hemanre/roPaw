/*
 * motor_drvr.h
 *
 *  Created on: 22 Dec 2023
 *      Author: hemanre
 */

#ifndef MAIN_DRIVERS_MOTOR_DRVR_H_
#define MAIN_DRIVERS_MOTOR_DRVR_H_

typedef enum {
	mtr_cmd_stop,
	mtr_cmd_aclk_fwd,
	mtr_cmd_fwd,
	mtr_cmd_clk_fwd,
	mtr_cmd_left,
	mtr_cmd_right,
	mtr_cmd_aclk_bwd,
	mtr_cmd_bwd,
	mtr_cmd_clk_bwd,

	mtr_cmd_total
} mtr_cmd_list;

static uint8_t mtr_cmd[mtr_cmd_total];

void motor_drvr_clkwise_fwd(void);
void motor_drvr_clkwise_bwd(void);
void motor_drvr_anticlkwise_fwd(void);
void motor_drvr_anticlkwise_bwd(void);
void motor_drvr_straight_fwd(void);
void motor_drvr_straight_bwd(void);
void motor_drvr_halt(void);

void motor_drvr_set_pwm(uint32_t chnl_0_pwm, uint32_t chnl_1_pwm, uint32_t chnl_2_pwm, uint32_t chnl_3_pwm);
void motor_drvr_set_dir(uint8_t dir);

int8_t motor_drvr_init(void);
#endif /* MAIN_DRIVERS_MOTOR_DRVR_H_ */
