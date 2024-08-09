#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2; i < n(n-1) ; i++)
    {
        if(n%i == 0)
        printf("%d is prime number",n);
        else
        printf("%d is not prime",n);

    }
    return 0;
}