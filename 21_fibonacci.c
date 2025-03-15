// 21. WAP to print the fibonacci series up to n.
#include<stdio.h>
void main()
{
    int n, i, a = 0, b = 1, c;
    printf("Enter n to print fibonacci series nth times:\n");
    scanf("%d",&n);
    printf("%d",a);
    for(i = 1 ; i < n ;i++)
    {
        c = a + b;
        a = b;
        b = c;
                                                                               
      printf(" %d",c);
    }
}