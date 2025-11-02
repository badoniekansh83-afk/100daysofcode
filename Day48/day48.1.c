//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int isRotation(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;

    
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    
    if (len1 != len2) {
        return 0; 
    }

    
    char concatenated[200];
    for (int i = 0; i < len1; i++) {
        concatenated[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concatenated[len1 + i] = str1[i];
    }
    concatenated[2 * len1] = '\0'; 

    
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (concatenated[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; 
        }
    }

    return 0; 
}