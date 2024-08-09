// Write a Program to find whether a year entered by the user is a leap year or not.

#include <stdio.h>

int isLeapYear(int year) {
    // Leap year is divisible by 4
    // If divisible by 100, it should also be divisible by 400
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

int main() {
    int year;

    // Input the year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}