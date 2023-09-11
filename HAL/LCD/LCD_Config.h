/*
 * LCD_Config.h
 *
 *  Created on: Sep 10, 2023
 *  Author  : Yasmeen Elkhateb
 *  MICRO   : STM32F401CCU6
 *  LAYER   : HAL
 *  DRIVER  : LCD_Driver
 *  File    : Configuration File
 *  Version :1.0
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_



/*LCD_MODE_OPTIONS: _4_BIT_MODE,_8_BIT_MODE*/
#define LCD_MODE _8_BIT_MODE


/**********************************************SELECT MC PIN*****************************************************/
#define LCD_PORT    GPIO_PORTA

#define LCD_D0_PIN	2
#define LCD_D1_PIN	3
#define LCD_D2_PIN	4
#define LCD_D3_PIN	5
#define LCD_D4_PIN	6
#define LCD_D5_PIN	7
#define LCD_D6_PIN	8
#define LCD_D7_PIN	9
#define LCD_Rs_PIN	0
#define LCD_En_PIN	1


#endif /* HAL_LCD_LCD_CONFIG_H_ */
