//Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Product[10][10];
    int rows1, cols1, rows2, cols2, i, j, k;

    // Input dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if(cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize product matrix to zero
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            Product[i][j] = 0;
        }
    }

    // Multiply matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Product of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", Product[i][j]);
        }
        printf("\n");
    }

    return 0;
}