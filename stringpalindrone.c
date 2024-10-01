#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, len;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Get the length of the string
    len = strlen(str);
    
    // Convert to lowercase for case-insensitive comparison
    for(i = 0; i < len; ++i) {
        str[i] = tolower(str[i]);
    }
    
    // Check if the string is a palindrome
    for(i = 0, j = len - 1; i < j; ++i, --j) {
        if(str[i] != str[j]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }
    
    printf("The string is a palindrome.\n");
    return 0;
}
