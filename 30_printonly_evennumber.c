// 30. WAP using continue to print only even number using continue for odd numbers.
#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("All Even number from 0 to %d is :- \n", n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
            continue;
        printf("%d ", i);
    }

    
}