/*Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int max=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if(str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    for(int i=0;i<l;i++)
    {
        int length=0;
        int freq[256]={0};
        for(int j=i;j<l;j++)
        {
            freq[str[j]]++;
            if(freq[str[j]]==2)
            {
                break;
            }
            length++;
        }
        if(length>max)
        {
            max=length;
        }
        
    }
    
    printf("%d",max);
    return 0;
}

