//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[100], n;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers count = %d\n", positive);
    printf("Negative numbers count = %d\n", negative);
    printf("Zeroes count = %d\n", zero);

    return 0;
}