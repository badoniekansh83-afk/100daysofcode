//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce array size

        // Display updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}