################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32_VCP/usbd_cdc_if.c 

OBJS += \
./STM32_VCP/usbd_cdc_if.o 

C_DEPS += \
./STM32_VCP/usbd_cdc_if.d 


# Each subdirectory must supply rules for building sources it contributes
STM32_VCP/%.o STM32_VCP/%.su STM32_VCP/%.cyclo: ../STM32_VCP/%.c STM32_VCP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I"C:/Users/mggam/Documents/University of Illinois/EV Concept/StepperMotorController/Software/StepperController/STM32_VCP" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-STM32_VCP

clean-STM32_VCP:
	-$(RM) ./STM32_VCP/usbd_cdc_if.cyclo ./STM32_VCP/usbd_cdc_if.d ./STM32_VCP/usbd_cdc_if.o ./STM32_VCP/usbd_cdc_if.su

.PHONY: clean-STM32_VCP

