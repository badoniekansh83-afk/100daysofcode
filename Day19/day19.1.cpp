// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, hcf, lcm, tempA, tempB;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find HCF using Euclidean algorithm
    while(tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    hcf = tempA;
    lcm = (a * b) / hcf;

    printf("LCM = %d\n", lcm);

    return 0;
}