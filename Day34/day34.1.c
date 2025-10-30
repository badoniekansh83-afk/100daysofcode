//Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos - 1] = value;
    n++; // Increase array size

    // Display updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}