// 17. WAP to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>
void main()
{
	int n1 , n2 , i;
	printf("Enter two number:\n");
	scanf("%d %d",&n1 ,&n2);
	int max = n1 * n2;
	
	if (n1 <= 0 || n2 <= 0) {
        printf("LCM is undefined.\n");
        return;
    }

	for(i = 1 ; i <= max ; i++)
	{
		if( i % n1 == 0 && i % n2 == 0)
		{
			printf("%d is the L.C.M of %d & %d",i,n1,n2);
			break;
		}
	}
}