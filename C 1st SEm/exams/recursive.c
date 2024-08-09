// FIND FACTORIAL OF A NUMBER

#include <stdio.h>

int fact(int);

int main() {
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);  // Use &n to correctly store input in n
    f = fact(n);
    printf("\n%d! = %d\n", n, f);  // Correctly print newline character
    return 0;  // Return 0 to indicate successful completion
}

int fact(int k) {
    if (k <= 1)  // Adjust to handle case when k is 0 or 1
        return 1;
    else
        return k * fact(k - 1);
}
