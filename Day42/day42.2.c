//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    gets(str);

    // Converting lowercase to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}
