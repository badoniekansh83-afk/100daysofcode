// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int a,b,sum,diff,prod,div;
    printf("Enter the value of a: ");
    scanf("%d",& a);
    printf("Enter the value of b: ");
    scanf("%d",& b);

    sum=a+b;
    printf("\nThe sum of %d and %d is %d",a,b,sum);

    diff=a-b;
    printf("\nThe difference of %d and %d is %d",a,b,diff);

    prod=a*b;
    printf("\nThe product of %d and %d is %d",a,b,prod);

   div=a/b;
   printf("\n The division of %d and %d is %d",a,b,div)

}  