#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Store the original number
    original = num;
    
    // Reverse the number
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original number and reversed number are the same
    if(original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}
