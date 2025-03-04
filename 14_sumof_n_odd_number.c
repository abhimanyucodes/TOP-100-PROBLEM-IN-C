//14. WAP to sum of all odd number from 1 to n.
#include<stdio.h>
void main()
{
 int i, n,sum=0; 
 printf("Enter n: ");
 scanf("%d",&n);
 for(i = 1; i<=n; i++)
 {
    if(i % 2 !=0 )
    {
        sum+=i;          //sum = sum + i
    }
 }
 printf("Sum of all odd no: %d",sum);
}