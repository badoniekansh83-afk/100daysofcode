//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, sum = 0;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum while reading
        }
    }

    // Output the sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}