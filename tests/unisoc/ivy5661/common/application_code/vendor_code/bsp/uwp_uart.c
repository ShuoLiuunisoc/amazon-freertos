/*
 * uwp_uart.c
 *
 *  Created on: 2019��2��27��
 *      Author: xiangkai.gao
 */

#include "uwp_uart.h"

extern serial_t stdio_uart;

void vMyUARTOutput(char *DataToOutput, size_t LengthToOutput){
    for(int i = 0; i < LengthToOutput; i++)
        serial_putc(&stdio_uart, DataToOutput[i]);
}
