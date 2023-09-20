################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../imports/em_usbd.c \
../imports/em_usbdch9.c \
../imports/em_usbdep.c \
../imports/em_usbdint.c \
../imports/em_usbh.c \
../imports/em_usbhal.c \
../imports/em_usbhep.c \
../imports/em_usbhint.c \
../imports/em_usbtimer.c \
../imports/segmentlcd.c 

OBJS += \
./imports/em_usbd.o \
./imports/em_usbdch9.o \
./imports/em_usbdep.o \
./imports/em_usbdint.o \
./imports/em_usbh.o \
./imports/em_usbhal.o \
./imports/em_usbhep.o \
./imports/em_usbhint.o \
./imports/em_usbtimer.o \
./imports/segmentlcd.o 

C_DEPS += \
./imports/em_usbd.d \
./imports/em_usbdch9.d \
./imports/em_usbdep.d \
./imports/em_usbdint.d \
./imports/em_usbh.d \
./imports/em_usbhal.d \
./imports/em_usbhep.d \
./imports/em_usbhint.d \
./imports/em_usbtimer.d \
./imports/segmentlcd.d 


# Each subdirectory must supply rules for building sources it contributes
imports/em_usbd.o: ../imports/em_usbd.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbd.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbdch9.o: ../imports/em_usbdch9.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbdch9.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbdep.o: ../imports/em_usbdep.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbdep.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbdint.o: ../imports/em_usbdint.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbdint.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbh.o: ../imports/em_usbh.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbh.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbhal.o: ../imports/em_usbhal.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbhal.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbhep.o: ../imports/em_usbhep.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbhep.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbhint.o: ../imports/em_usbhint.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbhint.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/em_usbtimer.o: ../imports/em_usbtimer.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/em_usbtimer.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

imports/segmentlcd.o: ../imports/segmentlcd.c imports/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"imports/segmentlcd.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


