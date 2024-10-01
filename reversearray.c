#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse and print the array
    printf("Reversed array: ");
    for(i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
