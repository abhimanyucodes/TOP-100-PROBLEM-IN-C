//9. wap to calculate the absolute value of given integer using ternary.
#include<stdio.h>
void main()
{
  int n;
  printf("Enter no:\n");
  scanf("%d",&n);
  (n > 0) ? printf("absolute value of %d is %d",n,n) : printf("absolute value of %d is %d",n,-n);
}