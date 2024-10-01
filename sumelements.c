#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of elements
    for(i = 0; i < n; ++i) {
        sum += arr[i];
    }
    
    printf("Sum of elements: %d\n", sum);
    return 0;
}
