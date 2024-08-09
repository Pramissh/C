// PROGRAM TO PRINT NATURAL NUMBERS FROM 10 TO 20 WHEN INITIAL LOOP COUNTER IS SET TO 0.

#include<stdio.h>

int main()
{
    int i=0;
    while (i<=20)
    {
       if (i>=10)
       {
         printf("The value of i is: %d\n",i);
       
       }
       
      i++; // i++ = i+1
    }
    
    return 0;
}