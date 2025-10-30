//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements (ascending order):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    pos = n;
    for(int i = 0; i < n; i++) {
        if(key < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = key;
    n++; // Increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}