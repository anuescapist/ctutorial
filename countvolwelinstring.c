#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Count the vowels
    for(i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    // Output the count of vowels
    printf("Number of vowels: %d\n", count);
    
    return 0;
}
