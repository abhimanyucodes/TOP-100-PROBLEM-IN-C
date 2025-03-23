// Defined a function square that takes and int and return its square;
#include<stdio.h>
#include<math.h>
int square(int x)
{
    return x * x;
}

void main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    printf("Square of %d is %d\n", n, square(n));
}

