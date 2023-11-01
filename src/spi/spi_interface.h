#ifndef SPI_INTERFACE
#define SPI_INTERFACE

#include "spidrv.h"

SPIDRV_HandleData_t spi_handle_data;
SPIDRV_Handle_t spi_handle;

Ecode_t spi_init_to_FPGA ( void );

Ecode_t spi_transfer_bytes_callback ( void* buffer, int byte_count, SPIDRV_Callback_t callback );
Ecode_t spi_transfer_bytes_blocking ( void* buffer, int byte_count );

#endif // SPI_INTERFACE
