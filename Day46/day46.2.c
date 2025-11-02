//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}; 

    printf("Enter a string: ");
    gets(str);


    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }


    char firstRepeating = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z' && freq[ch - 'a'] > 1) {
            firstRepeating = ch;
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}