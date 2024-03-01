/*
 * Matrix_Keypad.h
 *
 *  Created on: Feb 21, 2024
 *      Author: kamal
 */
#ifndef CMSIS_DEVICE_DEVICE_DRIVERS_MATRIX_KEYPAD_MATRIX_KEYPAD_H_
#define CMSIS_DEVICE_DEVICE_DRIVERS_MATRIX_KEYPAD_MATRIX_KEYPAD_H_

#include <stdint.h>
#include "stm32f1xx_hal.h"
typedef struct Keypad_str {
///
/// attributes: keypad rows
	uint8_t Rows;
	///
	/// attributes: keypad columns
	uint8_t Columns;
///
/// user data
/// holds the status of the buttons
	uint32_t Button_Status;
///
///peripheral configuration
	GPIO_TypeDef *Row_Port;	//Output_Port (GPIO_A)
	uint8_t Row_Start_Pin;
	GPIO_TypeDef *Column_Port; //Intput_Port
	uint8_t Column_Start_Pin;
	uint32_t InputMask;
	uint32_t OutputMask;

} Keypad_Matrix_t;
//user functions
/// @fn void Keypad_Matrix_init(Keypad_Matrix_t*)
/// @brief
///
/// @param kp
void Keypad_Matrix_init(Keypad_Matrix_t *kp);
/// @fn void Keypad_Matrix_Refresh(Keypad_Matrix_t*)
/// @brief
///
/// @param kp
void Keypad_Matrix_Refresh(Keypad_Matrix_t *kp);
/// @fn uint8_t Keypad_Matrix_ReadKey(Keypad_Matrix_t*, uint8_t)
/// @brief
///
/// @param kp
/// @param Key
/// @return
uint8_t Keypad_Matrix_ReadKey(Keypad_Matrix_t *kp, uint8_t Key);

#endif /* DEVICE_DRIVERS_MATRIX_KEYPAD_MATRIX_KEYPAD_H_ */

