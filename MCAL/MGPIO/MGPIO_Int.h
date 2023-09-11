/*
 * MGPIO_Int.h
 *
 *  Created on: Aug 10, 2023
 *  Author  : Yasmeen Elkhateb
 *  MICRO   : STM32F401CCU6
 *  LAYER   : MCAL
 *  DRIVER  : GPIO_Driver
 *  File    : Interface File
 *  Version :1.0
 */

#ifndef MCAL_MGPIO_MGPIO_INT_H_
#define MCAL_MGPIO_MGPIO_INT_H_

typedef unsigned char u8;

#define GPIO_INPUT_MODE  00
#define GPIO_OUTPUT_MODE  01
#define GPIO_ALTFUN_MODE  10
#define GPIO_ANALOG_MODE  11

#define GPIO_PORTA 1
#define GPIO_PORTB 2
#define GPIO_PORTC 3

#define GPIO_OPENDRAIN 0
#define GPIO_PUSHPULL  1

#define GPIO_LOW_SPEED       00
#define GPIO_MEDIUM_SPEED    01
#define GPIO_HIGH_SPEED      10
#define GPIO_VERY_HIGH_SPEED 11

#define GPIO_NO_PULL   00
#define GPIO_PULL_UP   01
#define GPIO_PULL_DOWN 10

#define GPIO_LOW  0
#define GPIO_HIGH 1

/*******************************************************************************************************/
/*                                      Macros ALTF                                                    */
/*******************************************************************************************************/

#define ALTFN0           0b0000
#define ALTFN1           0b0001
#define ALTFN2           0b0010
#define ALTFN3           0b0011
#define ALTFN4           0b0100
#define ALTFN5           0b0101
#define ALTFN6           0b0110
#define ALTFN7           0b0111
#define ALTFN8           0b1000
#define ALTFN9           0b1001
#define ALTFN10          0b1010
#define ALTFN11          0b1011
#define ALTFN12          0b1100
#define ALTFN13          0b1101
#define ALTFN14          0b1110
#define ALTFN15          0b1111


void MGPIO_vSetPinMode(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8Mode);
void MGPIO_vSetPinOutputType(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8OutPutType);
void MGPIO_vSetPinOutputSpeed(u8 A_u8PotId, u8 A_u8PinNo, u8 A_u8OutputSpeed);
void MGPIO_vSetPinInputPull(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PullType);

u8 MGPIO_u8GetPinValue(u8 A_u8PortId, u8 A_u8PinNo);

void MGPIO_vSetPinVal(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PinVal);
void MGPIO_vSetPinVal_fast(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PinVal); /*BSRR*/

void MGPIO_vSetAlternativeFunction(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8AltFunc);

#endif /* MCAL_MGPIO_MGPIO_INT_H_ */
