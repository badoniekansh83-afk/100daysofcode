//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE], n, i, j, next_greater;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding next greater elements
    printf("Next greater elements are:\n");
    for(i = 0; i < n; i++) {
        next_greater = -1; // Default value if no greater element is found
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                next_greater = arr[j];
                break; // Exit inner loop once the next greater element is found
            }
        }
        printf("%d", next_greater);
        if(i < n - 1) {
            printf(", "); // Print comma for all but the last element
        }
    }
    printf("\n");

    return 0;
}
