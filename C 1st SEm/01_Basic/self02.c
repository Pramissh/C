// A PROGRAM TO CALCULATE SIMPLE INTEREST

#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    
    printf("Enter the values of p,n,r");
    scanf("%d,%d,%f",&p,&n,&r);

    si=(p*n*r)/100;
    printf("The SI is:%f\n",si);
    
    return 0;
}