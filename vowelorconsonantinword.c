#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char word[100];
    int i = 0;
    
    // Input the word
    printf("Enter a word: ");
    scanf("%s", word);
    
    // Loop through each character in the word
    while(word[i] != '\0') {
        char ch = tolower(word[i]); // Convert to lowercase to simplify checks
        
        // Check if the character is a vowel
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", word[i]);
        } else if((ch >= 'a' && ch <= 'z')) {
            printf("%c is a consonant.\n", word[i]);
        } else {
            printf("%c is not a letter.\n", word[i]);
        }
        
        i++;
    }
    
    return 0;
}

