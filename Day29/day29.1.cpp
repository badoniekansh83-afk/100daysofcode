//Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}