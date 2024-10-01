#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, base = 1, remainder;
    
    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    // Convert binary to decimal
    while(binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    
    // Output the decimal equivalent
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}
