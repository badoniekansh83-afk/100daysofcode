//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, sum = 0;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if matrix is square
    if(rows != cols) {
        printf("Matrix is not square. Diagonal sum not applicable.\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for(i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}