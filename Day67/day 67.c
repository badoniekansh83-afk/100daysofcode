/*Q117 (Logic Enhancers)
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include<stdio.h>

int main() 
{
    int n1,n2;
    printf("Enter the number of elements in the first array:");
    scanf("%d",&n1);
    
    if(n1<1)
    {
        do
        {
            printf("Number of elements cannot be non positive.Please re enter:");
            scanf("%d",&n1);
        }while(n1<1);
    }
    printf("Enter the number of elements in the second array:");
    scanf("%d",&n2);
    if(n2<1)
    {
        do
        {
            printf("Number of elements cannot be non positive.Please re enter:");
            scanf("%d",&n2);
        }while(n2<1);
    }
    
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        printf("Enter the %d entry of the first array (in a sorted manner):",i+1);
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<n2;i++)
    {
        printf("Enter the %d entry of the second array (in a sorted manner):",i+1);
        scanf("%d",&arr2[i]);
    }
    
    int result[n1+n2];
    for(int i=0;i<n1;i++)
    {
        result[i]=arr1[i];
    }
    
    for(int i=n1,j=0;i<n1+n2,j<n2;i++,j++)
    {
        result[i]=arr2[j];
    }
    int l=n1+n2;
    
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(result[j]<result[i])
            {
                int temp=result[j];
                result[j]=result[i];
                result[i]=temp;
            }
        }
    }
    
    for(int i=0;i<l;i++)
    {
        printf("%d\t",result[i]);
    }
    
    return 0;
}
