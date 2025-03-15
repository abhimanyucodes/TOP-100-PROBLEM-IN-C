// 20.  wap to reverse digit of a number.
#include<stdio.h>
void main()
{
    int n , rem , store = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ln = n;
    while( n > 0)
    {
        rem = n % 10;
        store = store * 10 + rem;
        n = n / 10;
    }
    printf("%d reverse = %d",ln ,store);
}