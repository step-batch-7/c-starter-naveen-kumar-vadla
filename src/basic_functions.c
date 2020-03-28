#include <stdio.h>

unsigned char is_even(int num);
unsigned char is_even(int num)
{
  return num % 2 == 0;
}

int main(void)
{
  int number;
  printf("Enter a number for is_even \n");
  scanf("%d", &number);
  printf("The number %d is %s \n", number, is_even(number) ? "even" : "not even");
}
