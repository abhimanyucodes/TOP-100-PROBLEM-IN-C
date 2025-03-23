// 31. WAP that continuously reads integers from the user and print their square. USE infinite loop & break statement to exit when -1 is enter.

#include <stdio.h>
void main()
{
    int n;
    
    while(1) 
    {
        printf("Enter a number: ");
       scanf("%d", &n);
      
      if(n == -1)
      {
        break;
      }
      int square = n * n ;
     printf("Square of %d is %d\n", n, square);
      
    }
    printf("Program terminated successfully.\n");
   
    
    
    
}