/*Q115 (Logic Enhancers)
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".*/

#include<stdio.h>
#include<string.h>

int main() 
{
    int freq1[256],freq2[256];
    char str1[100],str2[100];
    printf("Enter the first string:");
    fgets(str1,sizeof(str1),stdin);

    int l1=strlen(str1);
    if(str1[l1-1]=='\n')
    {
        str1[l1-1]='\0';
        l1--;
    }
    
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);

    int l2=strlen(str2);
    if(str2[l2-1]=='\n')
    {
        str2[l2-1]='\0';
        l2--;
    }
    if(l1!=l2)
    {
        printf("Not anagrams");
        return 0;
    }
    for(int i=0;i<256;i++)
    {
        freq1[i]=0;
        freq2[i]=0;
    }
    
    for(int i=0;i<l1;i++)
    {
        int c=str1[i];
        freq1[c]++;
    }
    
    for(int i=0;i<l2;i++)
    {
        int c=str2[i];
        freq2[c]++;
    }
    
    for(int i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    
    return 0;
}
