// WAP to find the maximum & minimum element in an array.
#include<stdio.h>
void main()
{
  int n ;
    printf("Enter array size: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Array size must be positive\n");
        return;
    } 
   int array[n] , i ;
   printf("\nEnter array element:\n");
   for(i = 0 ; i < n ; i++)
   {
     scanf("%d",&array[i]);
   }
   int max = array[0], min = array[0];

   for(i = 1 ; i < n ; i++)
   {
      if( array[i] > max )
      {
        max = array[i];
      }
      else if( min > array[i] )
      {
         min = array[i];
      }
   }

   printf("\nmaximum : %d\n",max);
   printf("minimum: %d",min);

}