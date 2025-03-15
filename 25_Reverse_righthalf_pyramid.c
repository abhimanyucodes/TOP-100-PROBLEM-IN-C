//25.  WAP to print _Reverse_righthalf_pyramid.
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter how many lines of Pyramid to print = ");
    scanf("%d",&n);
    for(i = n ; i >= 1 ; i--)
    {
        for(j = 1 ; j <= i ; j++)
        {
           printf(" *");
        }
        printf("\n");
    }
    
}