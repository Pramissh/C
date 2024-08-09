// WAP TO FIND THE SUM OF FIRST N NATURAL NUMBERS USING WHILE LOOP.

#include<stdio.h>

int main()

{
    int i=0, sum=0;
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    while (i<=n)
    {       
       sum=sum+i;         //----->WHILE 

       i++;
    }

    // for ( i = 0; i <= n; i++)
    // {
    //     sum=sum+i;       ------> FOR
    // }

    // do
    // {
    //   sum=sum+i;            -----> DO-WHILE
    //   i++;
    // } while (i<=n);
    
    
    printf("The sum of numbers from 0 to %d is: %d\n",n,sum);

    
    return 0;
}