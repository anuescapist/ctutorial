#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;
    
    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    // Convert decimal to binary
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    // Output the binary equivalent (in reverse order)
    printf("Binary equivalent: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}
