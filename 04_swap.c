//4.WAP to swap two number.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter no:\n");
    scanf("%d %d",&a,&b);
    printf("Before swap =  a: %d & b: %d\n",a,b);
    int temp =a;
    a=b;
    b=temp;
    printf("After swap =   a: %d & b: %d",a,b);
}