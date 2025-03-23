//40 . WAP that declares an integer variable and a pointer to it . Assign a value & print using pointer.
#include<stdio.h>
void main()
{
    int n;
    int *ptr = &n;
    scanf("%d",&n);
    printf("The value of n is : %d\n",*ptr);
    printf("The value of n is : %d",n);
}