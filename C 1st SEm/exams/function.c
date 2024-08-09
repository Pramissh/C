#include<stdio.h>
float add(int p , int q)
{
    float s;
    s=p+q;
    return s;
}
int main()
{
    int a; 
    float b, sum;
    printf("Enter the values of a and b:");
    scanf("%d,%f",&a,&b);
    sum = add(a,b);
    printf("/n SUM= %f",sum);
    return 0;
}