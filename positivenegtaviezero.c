#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check if the number is positive, negative, or zero
    if(num > 0) {
        printf("%d is a positive number.\n", num);
    } else if(num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }
    
    return 0;
}
