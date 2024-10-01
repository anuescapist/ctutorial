#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    for(int i = 2; i <= num / 2; ++i) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    
    // Input the upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    
    // Print all prime numbers between 1 and n
    printf("Prime numbers between 1 and %d are: ", n);
    for(int i = 1; i <= n; ++i) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
