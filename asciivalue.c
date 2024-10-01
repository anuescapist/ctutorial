#include <stdio.h>

int main() {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Print ASCII value of the character
    printf("ASCII value of %c = %d\n", ch, ch);
    
    return 0;
}
