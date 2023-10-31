#include "spidrv.h"
#include "spi_interface.h"

SPIDRV_HandleData_t handleData;
SPIDRV_Handle_t handle = &handleData;

int spi_init_to_FPGA( void ) 
{
  SPIDRV_Init_t initData = SPIDRV_MASTER_USART1;
  return SPIDRV_Init (handle, &initData);
}

int spi_transfer_bytes (void* buffer, int byte_count)
{
  return SPIDRV_MTransmitB(handle, buffer, byte_count);
}