#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Sum the digits
    while(num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    
    printf("Sum of digits = %d\n", sum);
    return 0;
}
