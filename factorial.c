#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    
    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Factorial is not defined for negative numbers
    if(n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for(i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    
    return 0;
}
