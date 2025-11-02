//Q83: Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    // Counting vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
