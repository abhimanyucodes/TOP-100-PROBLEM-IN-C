//39.  Create a programme using recursion to check if a number is palindrome.
#include<stdio.h>
int palindrome( int n , int rev )
{
    int rem;
    if(n <= 0 )
    return rev;


    rem = n % 10;
    rev = rev * 10 + rem;
    return palindrome(n / 10 ,rev);

}



void main()
{
    int n;
    printf("\nEnter number to check it is palindrome (Yes / No): ");
    scanf("%d",&n);
    if( palindrome(n,0) == n )
    {
        printf("%d is palindrome number",n);
    }
    else
    {
        printf("%d is not palindrome number",n);
    }
}