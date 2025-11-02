// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting characters until the null terminator
    while (str[count] != '\0') {
        count++;
    }

    // Subtracting 1 to exclude the newline character added by fgets
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("The number of characters in the string is: %d\n", count);
    return 0;
}