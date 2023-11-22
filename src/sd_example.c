#define _IGNORE_SD_EXAMPLE 

#ifndef _IGNORE_SD_EXAMPLE  

#include "imports/diskio.h"
#include "imports/ff.h"

#include "app_log.h"
#include "app_assert.h"

#if !FF_FS_NORTC && !FF_FS_READONLY
#include "sl_sleeptimer.h"
#endif

static const char str[] = "Silabs SD Card I/O Example via SPI!\r\n";
static const char* fst[] = {"", "FAT12", "FAT16", "FAT32", "exFAT"};

BYTE f_work[FF_MAX_SS]; // Work area (larger is better for processing time)

void write_to_sd_card(){
FATFS fs;
    FATFS *pfs;
    FIL fil;
    DWORD fre_clust;
    FRESULT ret_code;
    UINT bw;
    UINT br;

  #if !FF_FS_NORTC && !FF_FS_READONLY
    DWORD time_data;
    sl_status_t sc;
    sl_sleeptimer_date_t date = {
        .year = 122,
        .month = 2,
        .month_day = 1,
        .hour = 10,
        .min = 30,
        .sec = 0,
     };

    sc = sl_sleeptimer_set_datetime(&date);

    time_data = get_fattime();
    app_log("\nCurrent time is %lu/%lu/%lu %2lu:%02lu:%02lu.\n\n",
            (time_data >> 25) + 1980,
            (time_data >> 21) & 0x0f,
            (time_data >> 16) & 0x1f,
            (time_data >> 11) & 0x1f,
            (time_data >> 5) & 0x3f,
            (time_data << 1) & 0x1f);
  #endif

    // Give a work area to the default drive
    ret_code = f_mount(&fs, "", 0);

    // Show logical drive status
    ret_code = f_getfree("", &fre_clust, &pfs);
    app_log("-------------- Volume status --------------\n\r");
    app_log(("FAT type = %s\nBytes/Cluster = %lu\nNumber of FATs = %u\n"
             "Root DIR entries = %u\nSectors/FAT = %lu\n"
             "Number of clusters = %lu\nVolume start (lba) = %lu\n"
             "FAT start (lba) = %lu\nDIR start (lba,clustor) = %lu\n"
             "Data start (lba) = %lu\n%lu KiB total disk space.\n"
             "%lu KiB available.\n\n"),
              fst[pfs->fs_type],
              (DWORD)pfs->csize * 512,
              pfs->n_fats,
              pfs->n_rootdir,
              pfs->fsize,
              pfs->n_fatent - 2,
              (DWORD)pfs->volbase,
              (DWORD)pfs->fatbase,
              (DWORD)pfs->dirbase,
              (DWORD)pfs->database,
              (pfs->n_fatent - 2) * (pfs->csize / 2),
              fre_clust * (pfs->csize / 2));

    app_log("-------- Open file to write and read again ---------\n\r");
    // Open file to write
    ret_code = f_open(&fil, "hello.txt", FA_OPEN_ALWAYS | FA_READ | FA_WRITE);

    // Write a message
    ret_code = f_write(&fil, str, sizeof(str), &bw);

    // Close file
    ret_code = f_close(&fil);

    // Open file to read
    ret_code = f_open(&fil, "hello.txt", FA_OPEN_EXISTING | FA_READ);

    // Read back the content and print on the console
    ret_code = f_read(&fil, f_work, sizeof(f_work), &br);
    app_log("Read a message from SD card success! Byte read = %d\n\r", br);
    app_log("Content: %s", f_work);

    // Close file
    ret_code = f_close(&fil);
    // Unmount SDCARD
    (void)f_mount(NULL, "", 1);}

#endif // _IGNORE_SD_EXAMPLE 
