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

#include "src/debug_utils/redirect_printf.h"
#include "src/spi/spi_interface.h"
#include "src/fpga_test.h"

/***************************************************************************/
/**
 * Initialize application.
 ******************************************************************************/
void app_init(void)
{
  SWO_Setup_config();
  spi_init_to_FPGA();
  init_fpga_test();
}

/***************************************************************************/
/**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
  progress_fpga_test();
}
