//Q89: Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char str[100];
    char ab;
    int frequency = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to find its frequency: ");
    scanf(" %c", &ab);


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ab) {
            frequency++;
        }
    }

    printf("The frequency of '%c' in the string is: %d\n", ab, frequency);
    return 0;
}
