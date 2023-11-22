/***************************************************************************/
/**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#include "app.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_device.h"
#include "em_gpio.h"
#include "src/debug_utils/redirect_printf.h"
#include "src/led_matrix.h"
#include "src/menu.h"
#include "src/radio.h"
#include "src/scene_manager.h"
#include "src/spi/spi_interface.h"
#include "src/text_render.h"
#include "src/buttons.h"

/***************************************************************************/
/**
 * Initialize application.
 ******************************************************************************/
void app_init(void) {
  SWO_Setup_config();
  // CHIP_Init();
  // CMU_ClockEnable(cmuClock_GPIO, true);
  initButtons();
  initLEDMatrix();
  init_menu();
  spi_init_to_FPGA();
  init_radio();
  set_text("GUITAR ZERO");
}

/***************************************************************************/
/**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void) {
  progress_scene();
  for (int i = 0; i < 10; i++) {
    displayPixels();
  }
}
