// 29. WAP using continue to sum all positive numbers entered by the user ;  skip -ve numbers.
#include<stdio.h>
void main()
{
    int n,sum = 0;
    do
    { 
        printf("Enter a number: ");
        scanf("%d",&n);
        if( n < 0)
        continue;
        sum += n;
    }
    while( n != 0);
    
    printf("\nThe sum of all given number is = %d",sum);
    
    
}