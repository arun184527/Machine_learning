#include <stdio.h>
int main() 
{
   int num=1;
   while (num <= 50)
   {
       if (num % 5 ==0)
       {
           printf("%d is a multiple of 5\n",num);
        }else
        {
            printf("%d is not a multiple of 5\n",num);
        }
        num++;
   }
   return 0;
   }