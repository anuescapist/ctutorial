#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Count the digits
    while(num != 0) {
        num /= 10;  // Remove the last digit
        ++count;    // Increment the count
    }
    
    printf("Number of digits: %d\n", count);
    return 0;
}
