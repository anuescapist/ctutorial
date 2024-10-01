#include <stdio.h>

int main() {
    int n, i, pos, value;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n+1]; // Make room for one extra element
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position and value to insert
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    
    // Shift elements to the right to make space for the new element
    for(i = n; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the element
    arr[pos - 1] = value;
    
    // Print the array after insertion
    printf("Array after insertion: ");
    for(i = 0; i <= n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
