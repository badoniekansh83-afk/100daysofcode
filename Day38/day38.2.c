//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, isSymmetric = 1;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if matrix is square
    if(rows != cols) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry: matrix[i][j] == matrix[j][i]
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    // Output result
    if(isSymmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}