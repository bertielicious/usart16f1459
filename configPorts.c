#include "config.h"
void configPorts(void)
{
    ANSELA = 0x00;                  // disable all analogue inputs
    ANSELB = 0x00;
    ANSELC = 0x00;
    
    CM1CON0 = 0x00;                 // all COMPARATORS off
    CM2CON0 = 0x00;
    CM1CON1 = 0x00;
    CM2CON1 = 0x00;
    
    TRISCbits.TRISC5 = LO;  // RC5 is an output pin 5
    TRISCbits.TRISC4 = HI;  // RC5 is an input pin 6
}
