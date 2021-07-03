#include "config.h"
void initUSART(void)
{
    CM1CON0 = 0x00;         // comparators off
    CM2CON0 = 0x00;
    TRISBbits.TRISB7 = LO;   // TX pin is an output
    TXSTAbits.TXEN = HI;     // enable transmitter. TXIF is now set
    TXSTAbits.SYNC = LO;     // configure for asynchronous operation
    RCSTAbits.SPEN = HI;     // enables EUSART and configures TX pin as output
    SPBRG = 0x19;           // baud set to 2400
}
