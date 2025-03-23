//43. WAP that converts a large number of kilometers to miles using long to store the distance.
#include<stdio.h>
void main()
{
    long kilometer;
    printf("Enter distance in Kilometer: ");
    scanf("%ld",&kilometer);
    long result = kilometer * 0.621371;        //  1 kilometer = 0.621371 miles.
    printf("%ld in miles: %ld",kilometer,result);
}