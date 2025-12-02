/*Q119 (Logic Enhancers)
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>

int main() 
{
    int n,p=0;
    int freq[10];
    for(int i=0;i<10;i++)
    {
        freq[i]=0;
    }
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Number of elements cannot be non positive");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of the array:",i+1);
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
        if(freq[arr[i]]==2)
        {
             p=arr[i];
        }
    }
    printf("%d",p);
    
    
    return 0;
}
