#include <stdio.h>

int main() {
    int n, i, max;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Find the maximum element
    max = arr[0];
    for(i = 1; i < n; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Largest element: %d\n", max);
    return 0;
}
