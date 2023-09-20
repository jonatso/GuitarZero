################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../autogen/sl_board_default_init.c \
../autogen/sl_device_init_clocks.c \
../autogen/sl_event_handler.c \
../autogen/sl_iostream_handles.c \
../autogen/sl_power_manager_handler.c \
../autogen/sl_simple_button_instances.c \
../autogen/sl_simple_led_instances.c 

OBJS += \
./autogen/sl_board_default_init.o \
./autogen/sl_device_init_clocks.o \
./autogen/sl_event_handler.o \
./autogen/sl_iostream_handles.o \
./autogen/sl_power_manager_handler.o \
./autogen/sl_simple_button_instances.o \
./autogen/sl_simple_led_instances.o 

C_DEPS += \
./autogen/sl_board_default_init.d \
./autogen/sl_device_init_clocks.d \
./autogen/sl_event_handler.d \
./autogen/sl_iostream_handles.d \
./autogen/sl_power_manager_handler.d \
./autogen/sl_simple_button_instances.d \
./autogen/sl_simple_led_instances.d 


# Each subdirectory must supply rules for building sources it contributes
autogen/sl_board_default_init.o: ../autogen/sl_board_default_init.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_board_default_init.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_device_init_clocks.o: ../autogen/sl_device_init_clocks.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_device_init_clocks.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_event_handler.o: ../autogen/sl_event_handler.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_event_handler.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_iostream_handles.o: ../autogen/sl_iostream_handles.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_iostream_handles.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_power_manager_handler.o: ../autogen/sl_power_manager_handler.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_power_manager_handler.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_simple_button_instances.o: ../autogen/sl_simple_button_instances.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_simple_button_instances.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

autogen/sl_simple_led_instances.o: ../autogen/sl_simple_led_instances.c autogen/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32GG990F1024=1' '-DSL_BOARD_NAME="BRD2200A"' '-DSL_BOARD_REV="B05"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/usb_gecko/src" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/common/drivers" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/kit/EFM32GG_STK3700/config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\config" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen" -I"C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFM32GG/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/StianJSulebak/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -Os -Wall -Wextra -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"autogen/sl_simple_led_instances.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


