// WAP TO FIND THE FACTORIAL OF A NUMBER USING FOR LOOP.

#include<stdio.h>

int main()
{
   int i=1 ,n,fact=1;
   printf("enter the number:");
   scanf("%d",&n);
    
    if (n==0)
    {
        printf("The factorial of 0 is 1.");
    }
    else
{
   for(i=1 ;i<=n; i++)
   {
    fact=fact*i;
   }

//    while (i<=n)
//    {
//     fact*=i;
//     i++;
//    }
}

   printf("\n The factorial of %d is: %d",n,fact);
    return 0;
}