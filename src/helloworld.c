/*
 * main.c
 *
 * Created on: August 20, 2016
 *      Author: hsp
   * This file implements SD to write a string of characters, then read from it and print to the serial port.
 *
 */

#include <string.h>
#include "platform.h"
#include "xparameters.h"

#include "xil_printf.h"
#include "ff.h"
#include "xdevcfg.h"

static FATFS fatfs;

#define FILE "test.txt"

int main()
{
    init_platform();
    FIL lol;
    UINT l=64;
    f_mount(&fatfs,"",0);
    const char src_str[] = "Formula Manipal:Engineering Formula96";
    u32 len = strlen(src_str);
    f_open(&lol,FILE,FA_CREATE_ALWAYS | FA_WRITE);
    f_write(&lol,src_str,(len),&l);
    f_close(&lol);
    char dest_str[0];//len<=33
    f_open(&lol,FILE,FA_READ);
    f_read(&lol,dest_str,(len+1),&l);
    f_close(&lol);
    xil_printf("%s\r\n",dest_str);
    cleanup_platform();
    return 0;
}
