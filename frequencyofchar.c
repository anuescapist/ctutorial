#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Frequency array to store count of characters
    int i;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Count frequency of each character
    for(i = 0; str[i] != '\0'; ++i) {
        freq[(int)str[i]]++;
    }
    
    // Display the frequency of each character
    printf("Character frequencies:\n");
    for(i = 0; i < 256; ++i) {
        if(freq[i] != 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
