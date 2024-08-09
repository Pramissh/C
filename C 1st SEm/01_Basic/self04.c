//A PROGRAM TO FIND AREA OF CIRCLE AND VOLUME OF CYLINDER
#include<stdio.h>

int main()
{
    float r;
    float pi=3.14;
    printf("enter the radius of circle:\n");
    scanf("%f",&r);
    float a= pi*r*r;
    printf("The area of circle is:%f m^2\n",a);
    int h;
    printf("Enter the height of cylinder");
    scanf("%d",&h);
    printf("The volume of cylinder is: %f m^3",a*h);


    return 0;
}