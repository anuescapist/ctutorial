#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    
    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    // Find the length of the first string
    for(i = 0; str1[i] != '\0'; ++i);
    
    // Append the second string to the first
    for(j = 0; str2[j] != '\0'; ++j, ++i) {
        str1[i] = str2[j];
    }
    
    // Null-terminate the concatenated string
    str1[i] = '\0';
    
    // Output the concatenated string
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}

