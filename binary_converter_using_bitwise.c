

#include <stdio.h>

int main()
{
  int decimal_num, bit, result;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &decimal_num);

  for (bit = 31; bit >= 0; bit--)
  {
    result = decimal_num >> bit;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}

