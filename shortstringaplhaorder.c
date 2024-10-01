#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Sort the string using bubble sort
    int len = strlen(str);
    for(i = 0; i < len - 1; ++i) {
        for(j = i + 1; j < len; ++j) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    // Output the sorted string
    printf("Sorted string: %s\n", str);
    
    return 0;
}
