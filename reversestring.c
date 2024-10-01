#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Get the length of the string
    int len = strlen(str);
    
    // Reverse the string
    for(i = 0, j = len - 1; i < j; ++i, --j) {
        // Swap the characters
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}

