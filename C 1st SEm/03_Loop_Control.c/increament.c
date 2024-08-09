#include<stdio.h>

int main()
{
    int i=5;
    int j=10;

    printf("The value of i after i++ is: %d\n", i++);
    // printf("The value of i after i++ is: %d\n", ++i);
    printf("The value of i  is: %d\n", i);
    
    //  printf("The value of j after j-- is: %d\n", j--);
     printf("The value of j after --j is: %d\n", --j);
     printf("The value of j is: %d\n", j);
    // i++ ---> First increament, then print 
    // ++i ---> First print, then increament
    // j-- ---> First decreament, then print 
    // --j ---> First print, then decreament
    
    // +=, -=, *= etc. are compound assignment operators
    i+=10; // increment by 10
     printf("The value of i  is: %d\n", i); 
    return 0;
}