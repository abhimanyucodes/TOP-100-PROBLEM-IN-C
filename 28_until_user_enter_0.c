//28. WAP to calculates the sum of all numbers entered by a user until the user enters 0.
#include<stdio.h>
void main()
{
    int n,sum = 0;
    do
    { 
        printf("Enter a number: ");
        scanf("%d",&n);
        sum += n;
    }
    while( n != 0);
    printf("\nThe sum of all given number is = %d",sum);
    
    
}