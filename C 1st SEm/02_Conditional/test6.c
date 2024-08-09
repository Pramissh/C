// WAP to find out whether a number is lowercase or not.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

     // 97-122 = a-z ASCII values
     if(ch>=97 && ch<=122)
     printf("The character is lowercase.");
     else
     printf("The character is not lowercase.");
    return 0;
}