#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    
    // Input number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Input elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of all elements
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
    }
    
    // Output the sum
    printf("Sum of all elements = %d\n", sum);
    
    return 0;
}
