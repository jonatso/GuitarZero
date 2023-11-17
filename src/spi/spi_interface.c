#include "spidrv.h"
#include "spi_interface.h"
#include "app.h"

#if PRODUCTION_BUILD
#include "sl_spidrv_instances.h"
#endif

SPIDRV_HandleData_t spi_handle_data;
SPIDRV_Handle_t spi_handle = &spi_handle_data;

Ecode_t spi_init_to_FPGA(void)
{
#if PRODUCTION_BUILD
  
  spi_handle = sl_spidrv_usart_fpga_spi_instance_handle;
  return ECODE_OK;

#else // STK3700 Dev board spi init
  SPIDRV_Init_t initData = SPIDRV_MASTER_USART1;
  initData.frameLength = 16;
  // initData.bitOrder = spidrvBitOrderMsbFirst;
  return SPIDRV_Init(spi_handle, &initData);

#endif
}

Ecode_t spi_transfer_bytes_callback(void *buffer, int byte_count, SPIDRV_Callback_t callback)
{
  return SPIDRV_MTransmit(spi_handle, buffer, byte_count, callback);
}

Ecode_t spi_transfer_bytes_blocking(void *buffer, int byte_count)
{

  return SPIDRV_MTransmitB(spi_handle, buffer, byte_count);
}
