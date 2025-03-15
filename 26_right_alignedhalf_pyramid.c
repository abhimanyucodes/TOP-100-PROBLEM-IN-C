//25.  WAP to print right-aligned half-pyramid.c
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter how many lines of Pyramid to print = ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
     for(j = 1 ; j <= (n - i) ; j++)
     {
        printf(" ");
     }
      
     for(k = 1 ; k <= i ; k++)
     {
        printf("*");
     }
     printf("\n");
    }
    
}