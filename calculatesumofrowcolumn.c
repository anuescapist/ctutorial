#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // Input number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of each row
    for(i = 0; i < rows; ++i) {
        int rowSum = 0;
        for(j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }
    
    // Calculate the sum of each column
    for(j = 0; j < cols; ++j) {
        int colSum = 0;
        for(i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }
    
    return 0;
}
