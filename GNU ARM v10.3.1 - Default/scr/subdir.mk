################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../scr/usb_enum.c 

OBJS += \
./scr/usb_enum.o 

C_DEPS += \
./scr/usb_enum.d 


# Each subdirectory must supply rules for building sources it contributes
scr/usb_enum.o: ../scr/usb_enum.c scr/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\simple_button_baremetal\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\simple_button_baremetal\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\simple_button_baremetal" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"scr/usb_enum.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


