#include "config.h"
uchar fsm(uchar state)
{
    switch(state)
    {
        case    1:
            if(SWIP == HI)
            {
                state = 1;
            }
            else
            {
                state = 2;
            }
            break;
            
        case    2:
            
            counter++;
            state = 3;
            break;
            
        case    3:
            if(counter >=10)
            {
                state = 4;
            }
            else
            {
                state = 2;
            }
            break;
            
        case    4:
            if(SWIP == HI)
            {
                state = 5;
            }
            else
            {
                state = 6;
            }
            break;
            
        case    5:
            counter = 0;
            state = 2;
            break;
            
        case    6:
            SWOP = HI;
            counter = 0;
            state = 7;
            break;
            
        case    7:
            if(SWIP == LO)
            {
                state = 7;
            }
            else
            {
                state = 8;
            }
            break;
            
        case    8:
            counter++;
            state = 9;
            break;
            
        case    9:    
            if(counter >= 10)
            {
                state = 10;
            }
            else
            {
                state = 8;
            }
            break;
            
        case    10:
            if(SWIP == LO)
            {
                state = 11;
            }
            else
            {
                state = 12;
            }
            break;
            
        case    11:
            counter = 0;
            state = 8;
            break;
            
        case 12:
            counter = 0;
            SWOP = LO;
            break;
    }
    return state;
}

