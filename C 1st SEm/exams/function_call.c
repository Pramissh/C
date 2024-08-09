// CALL BY VALUE 

#include<stdio.h>
int add(int , int);

int main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d,%d",&a,&b);
    c=add(a,b);
    printf("/n The sum = %d",c);
}   
    int add(int p , int q)
 {
    int t;
    t=p+q;
    return(t);
       
}
