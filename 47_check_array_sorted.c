//47. WAP to check if the given array is sorted.
#include<stdio.h>
void main() {   
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array size must be positive\n");
        return;
    } 

    int array[n];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int isAscending = 1, isDescending = 1;  

    for (int i = 1; i < n; i++) {
        if (array[i] < array[i - 1])
         {
            isAscending = 0;               // Not ascending
        }
        if (array[i] > array[i - 1])
         {
            isDescending = 0;              // Not descending
        }
    }

    if (isAscending)
     {
        printf("Sorted in ascending order\n");
    }
    else if (isDescending)
     {
        printf("Sorted in descending order\n");
    }
    else
     {
        printf("Not sorted\n");
    }

}