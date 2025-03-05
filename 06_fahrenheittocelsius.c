//6.fahrenheit to celsius.
#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter temp in fahrenheit(f): ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in celsius: %.2f",c);
    
}