#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Linear search
    for(i = 0; i < n; ++i) {
        if(arr[i] == key) {
            printf("%d found at position %d\n", key, i+1);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("%d not found in the array.\n", key);
    }
    
    return 0;
}
