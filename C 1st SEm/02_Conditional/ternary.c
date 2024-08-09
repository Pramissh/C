#include<stdio.h>

int main()
{
    int a;
    printf("enter a\n");
    scanf("%d",&a);
    // one liner if else statement
    (a<5)? printf("%d is less than 5",a) : printf("%d is not less than 5",a);
    return 0;
}