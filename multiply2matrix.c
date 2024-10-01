#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    // Input dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    // Input dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    // Matrix multiplication is possible only if c1 == r2
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], result[r1][c2];
    
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c1; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < r2; ++i) {
        for(j = 0; j < c2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Initialize the result matrix to 0
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }
    
    // Multiply the matrices
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            for(k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Print the resulting matrix
    printf("Resulting matrix:\n");
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
