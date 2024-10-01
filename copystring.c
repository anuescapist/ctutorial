#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    
    // Copy the string
    strcpy(str2, str1);
    
    // Output the copied string
    printf("Copied string: %s\n", str2);
    
    return 0;
}
