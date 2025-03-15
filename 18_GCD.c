// 18. WAP to find the Greatest Common Divisor (GCD) of two numbers.
#include <stdio.h>
void main()
{
	int n1 , n2 , i;
	printf("Enter two number:\n");
	scanf("%d %d",&n1 ,&n2);
	int max = n1 >  n2 ? n1 : n2 ;   
    
    if (n1 <= 0 || n2 <= 0) {
        printf("GCD is undefined.\n");
        return;
    }

        for(i = max ; i >= 1 ; i--)
        {
           if(n1 % i == 0 && n2 % i == 0)
           {
            printf("GCD of %d and %d is: %d\n", n1, n2, i);
            break;
           }
        }
    
}