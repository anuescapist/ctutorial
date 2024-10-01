#include <stdio.h>

int main() {
    int n, i, pos;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position of the element to be deleted
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);
    
    // Shift elements to the left to delete the element
    for(i = pos - 1; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    
    // Print the array after deletion
    printf("Array after deletion: ");
    for(i = 0; i < n - 1; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
