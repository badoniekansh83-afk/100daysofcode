//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Sum[10][10];
    int rows1, cols1, rows2, cols2, i, j;

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

    // Check if addition is possible
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible. Dimensions must match.\n");
        return 0;
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Sum of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}