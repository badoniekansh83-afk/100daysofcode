//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[100], n, key, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements (ascending order):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            return 0;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element %d not found in the array.\n", key);
    return 0;
}