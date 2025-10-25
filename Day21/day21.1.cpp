//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    last = temp % 10;

    // Count digits and find first digit
    while(temp != 0) {
        first = temp;
        temp /= 10;
        digits++;
    }

    // If number has only one digit, no swap needed
    if(digits == 1) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    // Remove first and last digits from original number
    int middle = num % (int)pow(10, digits - 1); // remove first digit
    middle /= 10; // remove last digit

    // Construct new number: last digit + middle part + first digit
    int swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}