#include<stdio.h>

int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);

    if(age <= 70 && age >=18) //&& is the AND operator
    {
        printf("You are eligible to drive\n");
    }
    
    else{
        printf("You cannot drive\n");
    }
    return 0;
}