// Calculate the income tax paid by an employee to the government as per 
// the stats mentioned below:
// Income/Salary           Tax
//     2.5L-5L            5%
//     5L-10L             20%
//     Above              30%
// Note that: There is no tax below 2.5L.

#include<stdio.h>

int main()
{
    float tax=0, salary;
    printf("Enter the salary\n");
    scanf("%f",&salary);

    if(salary>=250000 && salary<=500000)
    {
        tax = tax + 0.05 * (salary-250000) ;
        
    }

    if(salary>=500000 && salary<=1000000)
    {
        tax = tax + 0.20 * (salary-500000) ;
        
    }
    
    if(salary>=1000000)
    {
        tax = tax + 0.30 * (salary-1000000) ;
       
    }

    printf("Your net income tax to be paid is: %f", tax);
    
    return 0;
}


    