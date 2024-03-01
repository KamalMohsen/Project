################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.c 

OBJS += \
./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.o 

C_DEPS += \
./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/%.o Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/%.su Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/%.cyclo: ../Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/%.c Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-Device-2f-Device_Drivers-2f-Matrix_Keypad

clean-Drivers-2f-CMSIS-2f-Device-2f-Device_Drivers-2f-Matrix_Keypad:
	-$(RM) ./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.cyclo ./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.d ./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.o ./Drivers/CMSIS/Device/Device_Drivers/Matrix_Keypad/Matrix_Keypad.su

.PHONY: clean-Drivers-2f-CMSIS-2f-Device-2f-Device_Drivers-2f-Matrix_Keypad

