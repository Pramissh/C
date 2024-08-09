// A PROGRAM TO CONVERT DEGREE CELSIUS INTO FARHENITE SCALE
#include<stdio.h>

int main()
{
    float C;
    float F;
    printf("Enter the temperature in degree celcius");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("The temperature in farhenite is:%f degree farhenite",F);
    return 0;
}