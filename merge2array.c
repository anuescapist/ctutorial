#include <stdio.h>

int main() {
    int n1, n2, i, j;
    
    // Input the number of elements for both arrays
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n1; ++i) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    
    printf("Enter the elements of the second array: ");
    for(i = 0; i < n2; ++i) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1 + n2];
    
    // Copy elements of the first array
    for(i = 0; i < n1; ++i) {
        merged[i] = arr1[i];
    }
    
    // Copy elements of the second array
    for(j = 0; j < n2; ++j) {
        merged[i + j] = arr2[j];
    }
    
    // Print the merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; ++i) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
