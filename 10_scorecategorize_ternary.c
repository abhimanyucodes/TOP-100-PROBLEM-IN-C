//10. wap to categorize student score using ternary operator.
#include<stdio.h>
void main()
{
  int marks;
  printf("Enter your marks:\n");
  scanf("%d",&marks);
  (marks > 80 ) ? printf("High") : (marks <= 80 && marks >= 50) ? printf("Moderate") : printf("Low");
}

