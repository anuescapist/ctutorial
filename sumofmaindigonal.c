#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    
    // Input number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    // Ensure it's a square matrix
    if(rows != cols) {
        printf("Not a square matrix. Cannot find the main diagonal sum.\n");
        return 0;
    }
    
    int matrix[rows][cols];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of the main diagonal
    for(i = 0; i < rows; ++i) {
        sum += matrix[i][i];
    }
    
    // Print the sum
    printf("Sum of the main diagonal elements = %d\n", sum);
    
    return 0;
}
