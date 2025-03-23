//41. WAP to change the value of an integer variable using pointer.
#include<stdio.h>
void main()
{
    int n = 10;
    int *ptr = &n;
    *ptr = 11;
    printf("The value of n is : %d",n);
}