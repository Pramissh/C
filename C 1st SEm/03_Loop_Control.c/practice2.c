// PROGRAM TO PRINT MULTIPLICATION TABLE OF GIVEN NUMBER N IN REVERSE ORDER.


#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=10;i;i--)
    {
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}