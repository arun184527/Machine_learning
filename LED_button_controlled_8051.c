#include <reg51.h>
sbit LED = P1^0;
sbit BUTTON = P3^2;
void main() 
{
    while(1)
 {
        if (BUTTON == 0) 
{  
            LED = 1;
        } 
else 
{
            LED = 0;
        }
    }
}