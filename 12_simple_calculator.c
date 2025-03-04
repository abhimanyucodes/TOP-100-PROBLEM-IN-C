//12. wap to make a simple calculator (/ , * ,-,+).
#include<stdio.h>
void main()
{
  char operator;
  int n1,n2;
  printf("Enter first number: ");
  scanf("%d",&n1);
  printf("Enter operator: ");
  scanf(" %c",&operator);
  printf("Enter second number: ");
  scanf("%d",&n2);

  switch(operator)
  {
    case '+' : printf("Sum: %d", n1 + n2);
    break;
    case '-' : printf("Subtraction: %d", n1 - n2);
    break;
    case '*' : printf("Multiplication: %d", n1 * n2);
    break;
    case '/' : printf("Division: %d", n1 / n2);
    break;

  }


}