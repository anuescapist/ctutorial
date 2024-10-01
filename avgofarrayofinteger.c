#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the elements: ");
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Calculate the average
    float average = (float)sum / n;
    
    // Output the result
    printf("Average = %.2f\n", average);
    
    return 0;
}
