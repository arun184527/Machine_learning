#include <reg51.h>
sbit RED = P1^0;
sbit YELLOW = P1^1;
sbit GREEN = P1^2;
void delay(unsigned int time) {
    int i, j;
    for(i=0; i<time; i++)
        for(j=0; j<1275; j++);
}
void main() {
    while(1) {
        RED = 1; YELLOW = 0; GREEN = 0;
        delay(1000);
        RED = 0; YELLOW = 1; GREEN = 0;
        delay(500);
        RED = 0; YELLOW = 0; GREEN = 1;
        delay(1000);
    }
}