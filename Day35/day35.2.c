//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Normalize k if greater than n
    k = k % n;

    // Rotate right by k positions
    for(i = 0; i < k; i++) {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    // Display rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}