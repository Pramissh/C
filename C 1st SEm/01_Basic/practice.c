// WAP to check whether a number is divisible by 5 or not.
#include<stdio.h>

int main()
{
    int n,rem;
    printf("Enter the number you want to check\n");
    scanf("%d",&n);
    rem=n%5;
    printf("Divisibility test returns:%d\n",rem);
    printf("If the reminder is 0, the number is divisible by 5.\n");
    printf("If the reminder is not 0, the number is not divisible by 5.\n");

    return 0;
}