#include <stdio.h>
#include <math.h> // Include this for pow()

int main() {
    int num, original, remainder, result = 0, n = 0;
    
    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    original = num;
    
    // Find the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }
    
    original = num;
    
    // Check if the number is Armstrong
    while (original != 0) {
        remainder = original % 10;
        result += (int)pow(remainder, n);  // Cast pow() result to int
        original /= 10;
    }
    
    // Print result
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}

