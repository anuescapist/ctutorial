#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input the number of terms
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Calculate the sum of first n natural numbers
    for(int i = 1; i <= n; ++i) {
        sum += i;
    }
    
    // Output the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    
    return 0;
}
