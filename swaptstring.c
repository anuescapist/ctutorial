#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    
    // Input the two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    // Swap the strings using a temporary string
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
    // Output the swapped strings
    printf("After swapping:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    
    return 0;
}
