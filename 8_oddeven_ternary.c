// 8.wap to find if the given number  is odd or even using ternary operator.
#include<stdio.h>
void main()
{
  int n;
  printf("Enter no:\n");
  scanf("%d",&n);
  (n % 2 == 0) ? printf("%d is Even",n) : printf("%d is odd",n);
}