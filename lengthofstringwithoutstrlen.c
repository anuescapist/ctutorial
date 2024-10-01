#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Find the length of the string
    for(i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    
    // We subtract 1 to ignore the newline character added by fgets
    printf("Length of the string: %d\n", length - 1);
    
    return 0;
}
