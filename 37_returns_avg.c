//37.Create a function get_average that takes 5 int numb & returns the avg.
#include<stdio.h>
float get_average(int a , int b , int c , int d , int e)
{
    return ( a + b + c + d + e) / 5 ;
}

void main()
{
    int n1 , n2 , n3 , n4 , n5;
    printf("Enter 5 numbers:\n");
    scanf("%d %d %d %d %d",&n1 ,&n2 ,&n3 ,&n4 ,&n5);
    printf("The average = %f",get_average(n1 , n2 , n3 , n4 , n5));
}


