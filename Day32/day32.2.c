// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0}; // To store frequency of digits 0–9

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Count digit frequencies
    while(num != 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(digitCount[i] > digitCount[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("Frequency: %d times\n", digitCount[maxDigit]);

    return 0;
}