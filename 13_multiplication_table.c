//13. WAP to print multiplication table of any integer.
#include<stdio.h>
void main()
{
    int digit ,result ,i;
    printf("Enter digit: ");
    scanf("%d",&digit);
    for(i = 1; i<=10; i++)
    {
        result = digit * i;
        printf("%d x %d = %d\n",digit ,i ,result);
    }
    

}