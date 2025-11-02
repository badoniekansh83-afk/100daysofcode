//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}