#include "spidrv.h"
#include "spi_interface.h"

SPIDRV_HandleData_t spi_handle_data;
SPIDRV_Handle_t spi_handle = &spi_handle_data;

Ecode_t spi_init_to_FPGA(void)
{
  SPIDRV_Init_t initData = SPIDRV_MASTER_USART1;
  initData.frameLength = 16;
  return SPIDRV_Init(spi_handle, &initData);
}

Ecode_t spi_transfer_bytes_callback(void *buffer, int byte_count, SPIDRV_Callback_t callback)
{
  return SPIDRV_MTransmit(spi_handle, buffer, byte_count, callback);
}

Ecode_t spi_transfer_bytes_blocking(void *buffer, int byte_count)
{

  return SPIDRV_MTransmitB(spi_handle, buffer, byte_count);
}