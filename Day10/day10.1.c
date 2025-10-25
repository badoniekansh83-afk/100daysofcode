//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    // Input side lengths
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check for triangle validity
    if (a + b > c && b + c > a && c + a > b) {
        // Classify triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("Invalid triangle: the side lengths do not satisfy the triangle inequality.\n");
    }

    return 0;
}