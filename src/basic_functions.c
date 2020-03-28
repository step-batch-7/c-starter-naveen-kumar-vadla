#include <stdio.h>

unsigned char is_even(int num);
unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num);
unsigned char is_odd(int num)
{
  return num % 2 != 0;
}

int main(void)
{
  int number_for_even_odd;

  printf("\nEnter a number for is_even and is_odd\n");
  scanf("%d", &number_for_even_odd);
  
  printf("The number %d is %s \n", number_for_even_odd, is_even(number_for_even_odd) ? "even" : "not even");
  printf("The number %d is %s \n", number_for_even_odd, is_odd(number_for_even_odd) ? "odd" : "not odd");
}
