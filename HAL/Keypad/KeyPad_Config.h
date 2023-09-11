/*
 * KeyPad_Config.h
 *
 *  Created on: Sep 11, 2023
 *  Author  : Yasmeen Elkhateb
 *  MICRO   : STM32F401CCU6
 *  LAYER   : HAL
 *  DRIVER  : KeyPad_Driver
 *  File    : Configuration File
 *  Version :1.0
 */

#ifndef HAL_KEYPAD_KEYPAD_CONFIG_H_
#define HAL_KEYPAD_KEYPAD_CONFIG_H_

/*************************************************_SELECT_KEYPAD_DATA_PORT_***************************/
#define KEYPAD_PORT  GPIO_PORTB

/****************************************************_SELECT_KEYPAD_PIN_***************************/
#define KEYPAD_R0_PIN                    3
#define KEYPAD_R1_PIN                    4
#define KEYPAD_R2_PIN                    5
#define KEYPAD_R3_PIN                    6
#define KEYPAD_C0_PIN                    0
#define KEYPAD_C1_PIN                    1
#define KEYPAD_C2_PIN                    2


/***************************************************_SELECT_KEYPAD_MODEL_****************************/
/*_OPTION_1 -> [ MODEL_A ]   */
/*_OPTION_2 -> [ MODEL_B ]   */
/*_OPTION_2 -> [ MODEL_C ]   */
#define KEYPAD_MODEL                 MODEL_C


#endif /* HAL_KEYPAD_KEYPAD_CONFIG_H_ */
