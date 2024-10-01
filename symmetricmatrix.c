#include <stdio.h>

int main() {
    int rows, cols, i, j, flag = 1;
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    // A matrix must be square (rows == cols) to be symmetric
    if (rows != cols) {
        printf("Matrix is not symmetric (must be square).\n");
        return 0;
    }
    
    int matrix[rows][cols];
    
    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if the matrix is symmetric
    for(i = 0; i < rows; ++i) {
        for(j = 0; j < cols; ++j) {
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    
    if(flag) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}
