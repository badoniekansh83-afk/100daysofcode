//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2;

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i]; // Copy to merged array
    }

    // Input second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i]; // Append to merged array
    }

    // Print merged array
    printf("Merged array:\n");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}