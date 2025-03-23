//44 . WAP to find the sum & average of all element in an array.
#include<stdio.h>
void main()
{
  int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Array size must be positive\n");
        return;
    } 
   int array[n] , i ;
   float  avg,sum = 0;
   printf("\nEnter array element:\n");
   for(i = 0 ; i < n ; i++)
   {
     scanf("%d",&array[i]);
     sum += array[i];
   }
    avg = sum / n ;
   printf("Sum of all array element is : %.2f\n",sum);
   printf("Average of all array element is : %.2f",avg);
  
}