#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // Input number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int a[rows][cols], b[rows][cols], sum[rows][cols];
    
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Add the two matrices
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Print the resulting matrix
    printf("Sum of the two matrices:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
