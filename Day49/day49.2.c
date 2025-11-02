//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main() {
    char name[100];

    printf("Enter a full name: ");
    gets(name);

    int length = strlen(name);
    int i = 0;

    printf("Formatted Name: ");

    // Print initials for all names except the last one
    while (i < length) {
        // Print the first character of the name
        if (i == 0 && name[i] != ' ' && name[i] != '\n') {
            printf("%c. ", name[i]);
        }

        // Find spaces to identify the start of new names
        if (name[i] == ' ') {
            // Check if it's not the last name
            if (i + 1 < length && name[i + 1] != ' ' && name[i + 1] != '\n') {
                // Look ahead to see if there's another space after this name
                int j = i + 1;
                int isLastName = 1;
                while (j < length) {
                    if (name[j] == ' ') {
                        isLastName = 0; 
                        break;
                    }
                    j++;
                }
                // If it's not the last name, print the initial
                if (!isLastName) {
                    printf("%c. ", name[i + 1]);
                } else {
                    // Print the full last name
                    printf("%s", &name[i + 1]);
                    break; 
                }
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}