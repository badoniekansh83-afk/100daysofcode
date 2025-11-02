//Q91: Remove all vowels from a string.

#include <stdio.h>
int main() {
    char str[100];
    char result[100];
    int j = 0;

    printf("Enter a string: ");
    gets(str);

    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = ch;
            j++;
        }
    }

    result[j] = '\0'; 

    printf("String after removing vowels: %s\n", result);
    return 0;
}