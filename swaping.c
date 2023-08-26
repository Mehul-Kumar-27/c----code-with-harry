#include<stdio.h>
int main() {
  double num1, num2, x;

  printf("Enter first number: ");
  scanf("%lf", &num1);

  printf("Enter second number: ");
  scanf("%lf", &num2);

  // value of num1 is assigned to x which is used as temprory variable
  x = num1;

  // value of num2 is assigned to num1
  num1 = num2;

  // value of x (initial value of num1) is assigned to num2
  num2 = x;

  // %.2lf displays number up to 2 decimal points

  printf("\nAfter swapping, first number = %.2lf\n", num1);
  printf("After swapping, second number = %.2lf", x);
  
  return 0;}
