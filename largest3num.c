#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Check for the largest number using if-else statements
    if(num1 >= num2 && num1 >= num3) {
        printf("Largest number: %d\n", num1);
    } else if(num2 >= num1 && num2 >= num3) {
        printf("Largest number: %d\n", num2);
    } else {
        printf("Largest number: %d\n", num3);
    }
    
    return 0;
}
