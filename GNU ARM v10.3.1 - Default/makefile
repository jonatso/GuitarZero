################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include imports/subdir.mk
-include gecko_sdk_4.3.1/platform/service/system/src/subdir.mk
-include gecko_sdk_4.3.1/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_4.3.1/platform/service/power_manager/src/subdir.mk
-include gecko_sdk_4.3.1/platform/service/iostream/src/subdir.mk
-include gecko_sdk_4.3.1/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.3.1/platform/emlib/src/subdir.mk
-include gecko_sdk_4.3.1/platform/emdrv/gpiointerrupt/src/subdir.mk
-include gecko_sdk_4.3.1/platform/driver/leddrv/src/subdir.mk
-include gecko_sdk_4.3.1/platform/driver/debug/src/subdir.mk
-include gecko_sdk_4.3.1/platform/driver/button/src/subdir.mk
-include gecko_sdk_4.3.1/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.3.1/platform/common/src/subdir.mk
-include gecko_sdk_4.3.1/platform/Device/SiliconLabs/EFM32GG/Source/subdir.mk
-include gecko_sdk_4.3.1/hardware/board/src/subdir.mk
-include debug_utils/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := GuitarZeroMCU
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: GuitarZeroMCU.axf

# Tool invocations
GuitarZeroMCU.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m3 -mthumb -T "C:\Users\StianJSulebak\SimplicityStudio\v5_workspace\GuitarZeroMCU\autogen\linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="GuitarZeroMCU.map" --specs=nano.specs -o GuitarZeroMCU.axf -Wl,--start-group "./app.o" "./main.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_power_manager_handler.o" "./autogen/sl_simple_button_instances.o" "./autogen/sl_simple_led_instances.o" "./debug_utils/redirect_printf.o" "./gecko_sdk_4.3.1/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.3.1/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.3.1/platform/Device/SiliconLabs/EFM32GG/Source/startup_efm32gg.o" "./gecko_sdk_4.3.1/platform/Device/SiliconLabs/EFM32GG/Source/system_efm32gg.o" "./gecko_sdk_4.3.1/platform/common/src/sl_assert.o" "./gecko_sdk_4.3.1/platform/common/src/sl_slist.o" "./gecko_sdk_4.3.1/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.3.1/platform/driver/button/src/sl_button.o" "./gecko_sdk_4.3.1/platform/driver/button/src/sl_simple_button.o" "./gecko_sdk_4.3.1/platform/driver/debug/src/sl_debug_swo.o" "./gecko_sdk_4.3.1/platform/driver/leddrv/src/sl_led.o" "./gecko_sdk_4.3.1/platform/driver/leddrv/src/sl_simple_led.o" "./gecko_sdk_4.3.1/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_burtc.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_core.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_emu.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_msc.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_rtc.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_system.o" "./gecko_sdk_4.3.1/platform/emlib/src/em_timer.o" "./gecko_sdk_4.3.1/platform/service/device_init/src/sl_device_init_emu_s0.o" "./gecko_sdk_4.3.1/platform/service/device_init/src/sl_device_init_hfxo_s0.o" "./gecko_sdk_4.3.1/platform/service/device_init/src/sl_device_init_lfxo_s0.o" "./gecko_sdk_4.3.1/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.3.1/platform/service/iostream/src/sl_iostream.o" "./gecko_sdk_4.3.1/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./gecko_sdk_4.3.1/platform/service/iostream/src/sl_iostream_stdlib_config.o" "./gecko_sdk_4.3.1/platform/service/iostream/src/sl_iostream_swo.o" "./gecko_sdk_4.3.1/platform/service/power_manager/src/sl_power_manager.o" "./gecko_sdk_4.3.1/platform/service/power_manager/src/sl_power_manager_debug.o" "./gecko_sdk_4.3.1/platform/service/power_manager/src/sl_power_manager_hal_s0_s1.o" "./gecko_sdk_4.3.1/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_4.3.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtc.o" "./gecko_sdk_4.3.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./gecko_sdk_4.3.1/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.3.1/platform/service/system/src/sl_system_process_action.o" "./imports/em_usbd.o" "./imports/em_usbdch9.o" "./imports/em_usbdep.o" "./imports/em_usbdint.o" "./imports/em_usbh.o" "./imports/em_usbhal.o" "./imports/em_usbhep.o" "./imports/em_usbhint.o" "./imports/em_usbtimer.o" "./imports/segmentlcd.o" "./src/usb_enum.o" "./src/usb_hid.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: GuitarZeroMCU.out'
	arm-none-eabi-objcopy "GuitarZeroMCU.axf" "GuitarZeroMCU.out"
	@echo ' '

	@echo 'Building hex file: GuitarZeroMCU.hex'
	arm-none-eabi-objcopy -O ihex "GuitarZeroMCU.axf" "GuitarZeroMCU.hex"
	@echo ' '

	@echo 'Building bin file: GuitarZeroMCU.bin'
	arm-none-eabi-objcopy -O binary "GuitarZeroMCU.axf" "GuitarZeroMCU.bin"
	@echo ' '

	@echo 'Building s37 file: GuitarZeroMCU.s37'
	arm-none-eabi-objcopy -O srec "GuitarZeroMCU.axf" "GuitarZeroMCU.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "GuitarZeroMCU.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) GuitarZeroMCU.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
