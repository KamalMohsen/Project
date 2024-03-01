/*
 * Matrix_Keypad.c
 *
 *  Created on: Feb 21, 2024
 *      Author: kamal
 */
#include "Matrix_Keypad.h"
/// @struct Keypad_str
/// @brief
/// this structure is used to configure the keypad

static void HardwareInterface_Initialize(Keypad_Matrix_t *kp) {
	//output pins
	GPIO_InitTypeDef GP = { .Mode = GPIO_MODE_OUTPUT_PP //Output Push Pull Mode,
	.Speed = GPIO_SPEED_LOW };
	uint32_t Pins = 0; //Output Pins
	for (int x = 0; x < kp->Rows; x++) {
		Pins |= (1 << (kp->Row_Start_Pin) + x);
		//Pins = Pins | (1 << (Start_Pin) + x);
	}
	GP.Pin = Pins;
	HAL_GPIO_Init(kp->Row_Port, &GP);
	kp->OutputMask = Pins;

	//input pins
	GP.Mode = GPIO_MODE_INPUT;
	GP.Pull = GPIO_PULLDOWN;
	Pins = 0;
	for (int x = 0; x < kp->Column_Start_Pin; x++) {
		Pins |= (1 << (kp->Row_Start_Pin) + x);
		//Pins = Pins | (1 << (Start_Pin) + x);
	}
	GP.Pin = Pins;
	HAL_GPIO_Init(kp->Column_Port, &GP);
	kp->InputMask = Pins;
}

static void HardwareInterface_GenerateDelay(uint16_t Delay) {
	HAL_Delay(Delay);

}

static uint8_t HardwareInterface_GetInputs(Keypad_Matrix_t *kp) {
	uint32_t m = kp->Column_Port->IDR & kp->InputMask;
	m >>= kp->Column_Start_Pin;
	return (uint8_t) m;
}

static void HardwareInterface_SetOutputs(Keypad_Matrix_t *kp,
		uint8_t OutputStatus) {
	kp->Row_Port->ODR &= ~(kp->OutputMask);
	kp->Row_Port->ODR |= ((uint32_t) OutputStatus) << kp->Row_Start_Pin;
}

