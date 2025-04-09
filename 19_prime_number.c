//19. WAP to check whether a given number is prime or not.
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i =1 ; i<=n ; i++)
    {
        if(n % i == 0)
        {
            count ++;
        }
    }
    if(count == 2)
    {
        printf("%d is a Prime number.",n);
    }
    else
    {
        printf("%d is Not a Prime number.",n);
    }
}
