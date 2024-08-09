// A PROGRAM TO FIND SUM OF ANY TWO NUMBERS

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the value of a and b\n");
    scanf("%d,%d", &a, &b); // Assigns the value in a and b.
    int c = a + b;
    printf("The sum of a and b is: %d", c);

    return 0;
}