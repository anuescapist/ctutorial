#include <stdio.h>

// Function to find the sum using recursion
int sumOfNaturalNumbers(int n) {
    if(n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    
    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Output the sum
    printf("Sum of first %d natural numbers = %d\n", n, sumOfNaturalNumbers(n));
    
    return 0;
}
