//Q85: Reverse a string in C

#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Adjust length to exclude the newline character if present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Reversing the string
    char reversed[100];
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);
    return 0;
}