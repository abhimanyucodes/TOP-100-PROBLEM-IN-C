//15. wap to find factorial of a given number.
#include<stdio.h>
void main()
{
 int i, n,fact=1; 
 printf("Enter n: ");
 scanf("%d",&n);
 for(i = 1; i<=n; i++)
 {
    fact*=i;         //fcat = fact * i
 }
 printf("Factorial of %d is: %d",n,fact);
}