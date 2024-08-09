/* WAP to find out whether a student is pass or fail,
if it requires total 40% and atleast 33% in each subject
to pass. Assume 3 subjects and take marks as an input from
user.*/

#include<stdio.h>

int main()
{
    float eng, sci, maths, percentage;
    printf("Enter your marks in all subjects\n");
    printf("English:");
    scanf("%f",&eng);
    printf("\nScience:");
    scanf("%f",&sci);
    printf("\nMaths:");
    scanf("%f",&maths);
    percentage = ((eng+sci+maths)/300)*100;
    if (percentage>=40 && maths>33 && eng>33 && sci>33)
    {
        printf("Congratulations! You have passed the exam\n");
        printf("Your percentage is: %f", percentage);
    }
    else
    {
        printf("You have failed the exam. You need to study\n");
        printf("Your percentage is:\t %f", percentage);
    }
    
    return 0;
}