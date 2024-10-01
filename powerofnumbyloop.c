#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    
    // Input base and exponent
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    // Calculate the power using a loop
    for(int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
