// 33. WAF that adds that takes 4 int parameters and return the sum .
#include<stdio.h>
int sum(int a , int b , int c , int d)
{
    int sum = a + b + c + d;
    return sum;
}

void main()
{
    int a , b , c , d;
    printf("Enter 4 number :\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);
    printf("sum is = %d",sum(a,b,c,d));
}