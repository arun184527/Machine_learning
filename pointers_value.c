#include <stdio.h>
int main()
{
    int a = 10;
    int *p;  
    p = &a; 
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p);
    printf("Value at pointer p = %d\n", *p);
    *p = 20; 
    printf("New value of a = %d\n", a);
    return 0;
}

