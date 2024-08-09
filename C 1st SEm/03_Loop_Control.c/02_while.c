// PROGRAM TO PRINT NATURAL NUMBERS LESS THAN 10.

#include<stdio.h>

int main()
{
    int a=1;
    //scanf("%d",&a);
    while (a<10)
    // a=11;
    // while(a>10) ---> This will lead to an infinite loop.
    {
        printf("%d\n",a);
        a++;
    }
    

    return 0;
}  