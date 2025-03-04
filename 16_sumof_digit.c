//16. wap to find sum of digit of an integer.
#include<stdio.h>
void main()
{
 int i, n,sum=0,rem; 
 printf("Enter n: ");
 scanf("%d",&n);
 int old_n =n;
while(n>0)
{
    rem = n % 10;
    sum+=rem;
    n = n / 10;
}
    printf("\nSum of %d is : %d",old_n,sum);
}