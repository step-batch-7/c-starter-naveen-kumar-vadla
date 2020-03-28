#include <stdio.h>

unsigned char is_even(int number);
unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number);
unsigned char is_odd(int number)
{
  return !is_even(number);
}

int main(void)
{
  int number_for_even;
  int number_for_odd;

  printf("\nEnter a number for is_even \n");
  scanf("%d", &number_for_even);

  printf("\nEnter a number for is_odd \n");
  scanf("%d", &number_for_odd);

  printf("\nThe number %d is %s \n", number_for_even, is_even(number_for_even) ? "even" : "not even");
  printf("The number %d is %s \n", number_for_odd, is_odd(number_for_odd) ? "odd" : "not odd");
}
