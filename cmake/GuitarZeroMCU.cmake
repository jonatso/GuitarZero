include(firstPriceEnv.cmake)

add_library(slc_GuitarZeroMCU OBJECT
    "${SDK_PATH}/hardware/board/src/sl_board_control_gpio.c"
    "${SDK_PATH}/hardware/board/src/sl_board_init.c"
    "${SDK_PATH}/platform/common/src/sl_assert.c"
    "${SDK_PATH}/platform/common/src/sl_slist.c"
    "${SDK_PATH}/platform/common/toolchain/src/sl_memory.c"
    "${SDK_PATH}/platform/Device/SiliconLabs/EFM32GG/Source/startup_efm32gg.c"
    "${SDK_PATH}/platform/Device/SiliconLabs/EFM32GG/Source/system_efm32gg.c"
    "${SDK_PATH}/platform/driver/button/src/sl_button.c"
    "${SDK_PATH}/platform/driver/button/src/sl_simple_button.c"
    "${SDK_PATH}/platform/driver/debug/src/sl_debug_swo.c"
    "${SDK_PATH}/platform/driver/leddrv/src/sl_led.c"
    "${SDK_PATH}/platform/driver/leddrv/src/sl_simple_led.c"
    "${SDK_PATH}/platform/emdrv/gpiointerrupt/src/gpiointerrupt.c"
    "${SDK_PATH}/platform/emlib/src/em_burtc.c"
    "${SDK_PATH}/platform/emlib/src/em_cmu.c"
    "${SDK_PATH}/platform/emlib/src/em_core.c"
    "${SDK_PATH}/platform/emlib/src/em_emu.c"
    "${SDK_PATH}/platform/emlib/src/em_gpio.c"
    "${SDK_PATH}/platform/emlib/src/em_msc.c"
    "${SDK_PATH}/platform/emlib/src/em_rtc.c"
    "${SDK_PATH}/platform/emlib/src/em_system.c"
    "${SDK_PATH}/platform/emlib/src/em_timer.c"
    "${SDK_PATH}/platform/service/device_init/src/sl_device_init_emu_s0.c"
    "${SDK_PATH}/platform/service/device_init/src/sl_device_init_hfxo_s0.c"
    "${SDK_PATH}/platform/service/device_init/src/sl_device_init_lfxo_s0.c"
    "${SDK_PATH}/platform/service/device_init/src/sl_device_init_nvic.c"
    "${SDK_PATH}/platform/service/iostream/src/sl_iostream.c"
    "${SDK_PATH}/platform/service/iostream/src/sl_iostream_retarget_stdio.c"
    "${SDK_PATH}/platform/service/iostream/src/sl_iostream_stdlib_config.c"
    "${SDK_PATH}/platform/service/iostream/src/sl_iostream_swo.c"
    "${SDK_PATH}/platform/service/power_manager/src/sl_power_manager.c"
    "${SDK_PATH}/platform/service/power_manager/src/sl_power_manager_debug.c"
    "${SDK_PATH}/platform/service/power_manager/src/sl_power_manager_hal_s0_s1.c"
    "${SDK_PATH}/platform/service/sleeptimer/src/sl_sleeptimer.c"
    "${SDK_PATH}/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtc.c"
    "${SDK_PATH}/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.c"
    "${SDK_PATH}/platform/service/system/src/sl_system_init.c"
    "${SDK_PATH}/platform/service/system/src/sl_system_process_action.c"

    "${SDK_PATH}/platform/middleware/usb_gecko/src/em_usbh.c"
    "${SDK_PATH}/platform/middleware/usb_gecko/src/em_usbhal.c"
    "${SDK_PATH}/platform/middleware/usb_gecko/src/em_usbhep.c"
    "${SDK_PATH}/platform/middleware/usb_gecko/src/em_usbhint.c"
    "${SDK_PATH}/platform/middleware/usb_gecko/src/em_usbtimer.c"
    
    "../app.c"
    "../autogen/sl_board_default_init.c"
    "../autogen/sl_device_init_clocks.c"
    "../autogen/sl_event_handler.c"
    "../autogen/sl_iostream_handles.c"
    "../autogen/sl_power_manager_handler.c"
    "../autogen/sl_simple_button_instances.c"
    "../autogen/sl_simple_led_instances.c"
    "../main.c"
    "../src/usb_hid.c"
    "../src/usb_enum.c"
    "../src/debug_utils/redirect_printf.c"
    )
    
    target_include_directories(slc_GuitarZeroMCU PUBLIC
    "../config"
    "../autogen"
    "../."
    "../src/debug_utils"
    "../src"
    "${SDK_PATH}/platform/Device/SiliconLabs/EFM32GG/Include"
    "${SDK_PATH}/platform/common/inc"
    "${SDK_PATH}/hardware/board/inc"
    "${SDK_PATH}/platform/driver/button/inc"
    "${SDK_PATH}/platform/CMSIS/Core/Include"
    "${SDK_PATH}/platform/driver/debug/inc"
    "${SDK_PATH}/platform/service/device_init/inc"
    "${SDK_PATH}/platform/emdrv/common/inc"
    "${SDK_PATH}/platform/emlib/inc"
    "${SDK_PATH}/platform/emdrv/gpiointerrupt/inc"
    "${SDK_PATH}/platform/service/iostream/inc"
    "${SDK_PATH}/platform/driver/leddrv/inc"
    "${SDK_PATH}/platform/service/power_manager/inc"
    "${SDK_PATH}/platform/common/toolchain/inc"
    "${SDK_PATH}/platform/service/system/inc"
    "${SDK_PATH}/platform/service/sleeptimer/inc"
    "${SDK_PATH}/platform/middleware/usb_gecko/inc"
    )
    
    target_compile_definitions(slc_GuitarZeroMCU PUBLIC
    DEBUG_EFM=1
    EFM32GG990F1024=1
    SL_BOARD_NAME="BRD2200A"
    SL_BOARD_REV="B05"
    SL_COMPONENT_CATALOG_PRESENT=1
    )
    
    target_link_libraries(slc_GuitarZeroMCU PUBLIC
    "-Wl,--start-group"
    "gcc"
    "c"
    "m"
    "nosys"
    "-Wl,--end-group"
)
target_compile_options(slc_GuitarZeroMCU PUBLIC
    $<$<COMPILE_LANGUAGE:C>:-mcpu=cortex-m3>
    $<$<COMPILE_LANGUAGE:C>:-mthumb>
    $<$<COMPILE_LANGUAGE:C>:-Wall>
    $<$<COMPILE_LANGUAGE:C>:-Wextra>
    $<$<COMPILE_LANGUAGE:C>:-Os>
    $<$<COMPILE_LANGUAGE:C>:-fdata-sections>
    $<$<COMPILE_LANGUAGE:C>:-ffunction-sections>
    $<$<COMPILE_LANGUAGE:C>:-fomit-frame-pointer>
    $<$<COMPILE_LANGUAGE:C>:-imacros sl_gcc_preinclude.h>
    $<$<COMPILE_LANGUAGE:C>:--specs=nano.specs>
    $<$<COMPILE_LANGUAGE:C>:-g>
    $<$<COMPILE_LANGUAGE:CXX>:-mcpu=cortex-m3>
    $<$<COMPILE_LANGUAGE:CXX>:-mthumb>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>
    $<$<COMPILE_LANGUAGE:CXX>:-Wall>
    $<$<COMPILE_LANGUAGE:CXX>:-Wextra>
    $<$<COMPILE_LANGUAGE:CXX>:-Os>
    $<$<COMPILE_LANGUAGE:CXX>:-fdata-sections>
    $<$<COMPILE_LANGUAGE:CXX>:-ffunction-sections>
    $<$<COMPILE_LANGUAGE:CXX>:-fomit-frame-pointer>
    $<$<COMPILE_LANGUAGE:CXX>:-imacros sl_gcc_preinclude.h>
    $<$<COMPILE_LANGUAGE:CXX>:--specs=nano.specs>
    $<$<COMPILE_LANGUAGE:CXX>:-g>
    $<$<COMPILE_LANGUAGE:ASM>:-mcpu=cortex-m3>
    $<$<COMPILE_LANGUAGE:ASM>:-mthumb>
    $<$<COMPILE_LANGUAGE:ASM>:-imacros sl_gcc_preinclude.h>
    $<$<COMPILE_LANGUAGE:ASM>:-x assembler-with-cpp>
)
set_property(TARGET slc_GuitarZeroMCU PROPERTY C_STANDARD 99)
set_property(TARGET slc_GuitarZeroMCU PROPERTY CXX_STANDARD 11)
set_property(TARGET slc_GuitarZeroMCU PROPERTY CXX_EXTENSIONS OFF)

target_link_options(slc_GuitarZeroMCU INTERFACE
    -mcpu=cortex-m3
    -mthumb
    -T${CMAKE_CURRENT_LIST_DIR}/../autogen/linkerfile.ld
    --specs=nano.specs
    -Xlinker -Map=$<TARGET_FILE_DIR:GuitarZeroMCU>/GuitarZeroMCU.map
    -Wl,--gc-sections
)

# BEGIN_SIMPLICITY_STUDIO_METADATA=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END_SIMPLICITY_STUDIO_METADATA
