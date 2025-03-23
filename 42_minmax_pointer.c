//42 . implement a function minmax that takes two integer pointers a & b as input & assign the smaller value to min & the larger value max using call by reference. Write a main function to test it with different values.
#include<stdio.h>
void minmax(int *a , int *b , int *min , int *max)
{
    if( *a > *b)
    {
        *max = *a;
        *min = *b;
    }
    else
    {
        *min = *a;
        *max = *b;
    }

    
}

void main()
{
    int a , b, max , min;
    printf("Enter a & b :\n");
    scanf("%d %d",&a ,&b);
    minmax(&a , &b , &min ,&max);
    printf("max = %d\n",max);
    printf("min = %d",min);
}

