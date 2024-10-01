#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array
    for(i = 0; i < n-1; ++i) {
        for(j = i+1; j < n; ++j) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Output the sorted array
    printf("Sorted array in ascending order: ");
    for(i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
