#include <stdio.h>

int main() {
    int num1, num2;
    
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Use if-else to find the maximum
    if(num1 > num2) {
        printf("Maximum: %d\n", num1);
    } else {
        printf("Maximum: %d\n", num2);
    }
    return 0;
}
