#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    
    // Input the number of prime numbers to print
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);
    
    // Print the first n prime numbers
    printf("First %d prime numbers: ", n);
    while(count < n) {
        if(isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    
    return 0;
}
