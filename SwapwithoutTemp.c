#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping without using a temporary variable
   /*This approach uses arithmetic operations to swap the values:
   a = a + b: Now a contains the sum of both numbers.
   b = a - b: The value of b is updated to the original value of a.
   a = a - b: The value of a is updated to the original value of b.
   */
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
