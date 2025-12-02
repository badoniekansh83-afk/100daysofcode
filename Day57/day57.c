//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE], n, i, j, prev_greater;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding previous greater elements
    printf("Previous greater elements are:\n");
    for(i = 0; i < n; i++) {
        prev_greater = -1; // Default value if no greater element is found
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev_greater = arr[j];
                break; // Exit inner loop once the previous greater element is found
            }
        }
        printf("%d", prev_greater);
        if(i < n - 1) {
            printf(", "); // Print comma for all but the last element
        }
    }
    printf("\n");

    return 0;
}
