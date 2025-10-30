//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if matrix is square
    if(rows != cols) {
        printf("Matrix is not square. Diagonal traversal not applicable.\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Main diagonal traversal
    printf("Main diagonal: ");
    for(i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }

    // Anti-diagonal traversal
    printf("\nAnti-diagonal: ");
    for(i = 0; i < rows; i++) {
        printf("%d ", matrix[i][cols - i - 1]);
    }

    return 0;
}