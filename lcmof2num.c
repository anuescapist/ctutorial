#include <stdio.h>

int main() {
    int num1, num2, max;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Find the maximum between the two numbers
    max = (num1 > num2) ? num1 : num2;
    
    // Find the LCM
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d.\n", num1, num2, max);
            break;
        }
        ++max;
    }
    
    return 0;
}
