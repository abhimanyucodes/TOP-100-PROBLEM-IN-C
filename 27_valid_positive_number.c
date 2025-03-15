// 27. WAP that prompts the user to enter a +ve number . Use a do - while loo to keep asking for the number until the user enter a valid number.
#include<stdio.h>
void main()
{
    int n;
    do
    { 
        printf("Enter positive number: ");
        scanf("%d",&n);
    }
    while( n < 0);
    printf("\nCorrect , %d is positive number.",n);
    
    
}