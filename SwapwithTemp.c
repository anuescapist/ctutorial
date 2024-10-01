#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping with a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
