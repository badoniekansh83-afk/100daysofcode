//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>
int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; // Now totalSum is the right sum for index i

        if (leftSum == totalSum) {
            printf("Pivot index: %d\n", i);
            return 0;
        }

        leftSum += arr[i]; // Update left sum for next index
    }

    printf("Pivot index: -1\n");
    return 0;
}