//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, flag = 1;
    int diag[20], count = 0;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if matrix is square
    if(rows != cols) {
        printf("Matrix is not square. Diagonal check not applicable.\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for(i = 0; i < rows; i++) {
        diag[count++] = matrix[i][i];
    }

    // Check for duplicates
    for(i = 0; i < count; i++) {
        for(j = i + 1; j < count; j++) {
            if(diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    // Output result
    if(flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}