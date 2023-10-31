#ifndef SPI_INTERFACE
#define SPI_INTERFACE

#include "spidrv.h"

SPIDRV_HandleData_t handleData;
SPIDRV_Handle_t handle;

int spi_init_to_FPGA ( void );

int spi_transfer_bytes (void* src, int byte_count);

#endif // SPI_INTERFACE
