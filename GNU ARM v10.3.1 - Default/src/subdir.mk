################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/usb_enum.c \
../src/usb_hid.c 

OBJS += \
./src/usb_enum.o \
./src/usb_hid.o 

C_DEPS += \
./src/usb_enum.d \
./src/usb_hid.d 


# Each subdirectory must supply rules for building sources it contributes
src/usb_enum.o: ../src/usb_enum.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"src/usb_enum.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/usb_hid.o: ../src/usb_hid.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"src/usb_hid.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


