// 45. WAP to find number of  occurrences of an element in array.
#include<stdio.h>
void main()
{
  int n ,num;
    printf("Enter array size: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Array size must be positive\n");
        return;
    } 
   int array[n] , i , count = 0 ;
   printf("\nEnter array element:\n");
   for(i = 0 ; i < n ; i++)
   {
     scanf("%d",&array[i]);
   }

   printf("Enter the element to check number of occurrences:  ");
   scanf("%d",&num);

   for(i = 0 ; i < n ; i++)
   {
     if( num == array[i])
     {
        count++;
     }
   }

   printf("The element %d is ( %d ) times present in array element.",num ,count);

}
