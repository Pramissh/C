// PRINT NATURAL NUMBERS LESS THAN N

#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }

    return 0;
}