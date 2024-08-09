// TO PRINT FIBONACCI SERIES UPTO N TERMS 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...... N

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int x, y, i;
    printf("How many terms are in the series? ");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++) {
        y = fibonacci(i);
        if (i == x)
            printf("%d", y);  // No comma after the last term
        else
            printf("%d, ", y);
    }
    
    printf("\n");  // Print newline after the series
    return 0;
}
