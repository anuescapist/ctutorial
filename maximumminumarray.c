#include <stdio.h>

int main() {
    int n, min, max;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the elements: ");
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize min and max
    min = max = arr[0];
    
    // Find min and max elements
    for(int i = 1; i < n; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Output the result
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    
    return 0;
}
