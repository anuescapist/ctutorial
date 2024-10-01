#include <stdio.h>

int main() {
    int num, cube;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calculate the cube
    cube = num * num * num;
    
    // Output the result
    printf("Cube of %d = %d\n", num, cube);
    
    return 0;
}
