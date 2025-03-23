//38. Create a programme using recursion to display the Fibonacci series up to n .
#include<stdio.h>

int fibonacci(int n)
{
    if (n <= 0)
    return 0;
    if(n == 1)
    return 1;

    return fibonacci(n-1) + fibonacci(n-2);
    

}

void main()
{
    int n , i;
    printf("Enter n to print Fibonacci series up to n: ");
    scanf("%d",&n);
    printf("\nFibonacci series upto %d digit = ",n);
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",fibonacci(i));
    }
}