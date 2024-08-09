//WAP to find the grade of a student as per marks given below:
/* 90-100 = A
    80-90 = B
    70-80 = C
    60-70 = D
    >70= F
    */

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter the marks \n");
    scanf("%d",&marks);
    if(marks>90 && marks<=100)
    {
        printf("You have got A grade\n");
    }
    else if(marks<=90 && marks>80)
    {
        printf("You have got B grade\n");
    }
        else if(marks<=80 && marks>70)
    {
        printf("You have got C grade\n");
    }
        else if(marks<=70 && marks>60)
    {
        printf("You have got D grade\n");
    }
    else {
        printf("You have got F grade");
    }
    return 0;
}