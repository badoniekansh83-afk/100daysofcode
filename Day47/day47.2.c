//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longestWord[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    gets(str);

    char currentWord[100];
    int currentLength = 0;
    int i = 0;

    while (1) {
        char ch = str[i];

        if (ch != ' ' && ch != '\n' && ch != '\0') {
            currentWord[currentLength] = ch;
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                currentWord[currentLength] = '\0'; 
                strcpy(longestWord, currentWord);
                maxLength = currentLength;
            }
            currentLength = 0; 
        }

        if (ch == '\0') {
            break;
        }
        i++;
    }

    printf("The longest word is: %s\n", longestWord);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}