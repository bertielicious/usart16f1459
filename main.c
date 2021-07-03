/*
 * File:   main.c
 * Author: User
 *
 * Created on 27 June 2021, 18:16
 */


#include "config.h"
#include "configOsc.h"
#include "initUSART.h"
#include "putch.h"
#include "configPorts.h"
#include "fsm.h"

void main(void) 
{
    configOsc();
    initUSART();
    configPorts();
    printf("hello Phil\n");
    while(1)
    {
        status = fsm(status);
        printf("%d\n", status);
       
    }
}
