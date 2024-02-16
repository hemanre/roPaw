/*
 * motor_drvr.h
 *
 *  Created on: 22 Dec 2023
 *      Author: hemanre
 */

#ifndef MAIN_DRIVERS_MOTOR_DRVR_H_
#define MAIN_DRIVERS_MOTOR_DRVR_H_

void motor_drvr_clkwise_fwd(void);
void motor_drvr_clkwise_bwd(void);
void motor_drvr_anticlkwise_fwd(void);
void motor_drvr_anticlkwise_bwd(void);
void motor_drvr_straight_fwd(void);
void motor_drvr_straight_bwd(void);
void motor_drvr_halt(void);

void motor_drvr_generic(uint8_t l_fwd, uint8_t l_bwd, uint8_t r_fwd, uint8_t r_bwd);

void motor_drvr_init(void);
#endif /* MAIN_DRIVERS_MOTOR_DRVR_H_ */
