//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; 

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    
    int areAnagrams = 1; 
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            areAnagrams = 0; 
            break;
        }
    }

    if (areAnagrams) {
        printf("The two strings are anagrams of each other.\n");
    } else {
        printf("The two strings are not anagrams of each other.\n");
    }

    return 0;
}