#include <stdio.h>

int main() {
    int num, i;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Print the multiplication table
    for(i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
