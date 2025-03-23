// 36. WAF max that takes two float arguments and returns the larger value.

#include<stdio.h>
float max(float a , float b)
{
    float maximum = ( a > b) ? a : b;
    return maximum;
}

int main()
{
    float n1 , n2;
    printf("Enter two numbers:\n");
    scanf("%f %f",&n1 ,&n2);
    printf("In %f & %f , max is = %f",n1,n2,max(n1 ,n2));
}