// 22. WAP to check given number is Armstrong number or not .
#include<stdio.h>
void main()
{
    int n, rem,armstrong = 0;
    printf("Enter n to check it is armstrong number or not : ");
    scanf("%d",&n);
    int ln = n; 
    while( n > 0)
    {
        rem = n % 10;
        n = n / 10;
        int cube = rem * rem * rem;
        armstrong += cube;
        
    }
    if ( ln == armstrong )
    {
        printf("%d is Armstrong number.",ln);
    }
    else
    {
        printf("%d is not Armstrong number.",ln);
    }
    
}