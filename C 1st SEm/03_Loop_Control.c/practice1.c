// PROGRAM TO PRINT MULTIPLICATION TABLE OF GIVEN NUMBER N.

#include<stdio.h>

int main()
{
    int n,a;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",n);
    for (int i = 1; i <=10; i++)
    {
        a=n*i;
        
        printf("%d * %d = %d",n,i,a);
        printf("\n");
    }
    
    return 0;
} 