#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols], transpose[cols][rows];
    
    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Find the transpose
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Print the transpose
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; ++i) {
        for(j = 0; j < rows; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
