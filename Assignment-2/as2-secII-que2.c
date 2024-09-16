#include<stdio.h>


int main()

{

  int first,second;
  char op;

  printf("Enter the 1st number:");
  scanf("%d",&first);
  printf("Enter the second number:");
  scanf("%d",&second);
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c",&op);	
  

  switch (op) {
    case '+':
      printf("%d + %d = %d", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d", first, second, first / second);
      break;
    // operator doesn't match any case constant
     default:
      printf("Error! operator is not correct");  
      break;  
  
  }
  return 0;
}
