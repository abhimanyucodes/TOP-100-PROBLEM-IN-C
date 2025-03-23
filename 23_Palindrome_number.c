//23. WAP to verify if a number is a Palindrome.
#include<stdio.h>
void main()
{
    int n, rem,palindrome = 0;
    printf("\nEnter n to check it is Palindrome number or not : ");
    scanf("%d",&n);
    int ln = n;
    while( n > 0)
    {
        rem = n % 10;
        palindrome = palindrome* 10 + rem;
        n = n / 10;
    }

    if(ln == palindrome)
    {
        printf("%d is palindrome a number.",ln);
    }
    else
    {
        printf("%d is not a palindrome number.",ln);
    }
   
    
}