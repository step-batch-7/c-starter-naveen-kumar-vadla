#include <stdio.h>

int get_fibonacci_series(unsigned int *fibonacci_series, int limit);
int get_fibonacci_series(unsigned int *fibonacci_series, int limit)
{
  unsigned int first_term = 0;
  unsigned int second_term = 1;
  for (int index = 0; index < limit; index++)
  {
    fibonacci_series[index] = first_term;
    int temp = second_term;
    second_term += first_term;
    first_term = temp;
  }
  return 0;
}

int print_fibonacci_series(unsigned int *fibonacci_series, int limit);
int print_fibonacci_series(unsigned int *fibonacci_series, int limit)
{
  for (int index = 0; index < limit; index++)
  {
    printf("%u ", fibonacci_series[index]);
  }
  printf("\n");
  return 0;
}

int main(void)
{
  printf("-------------------- Fibonacci Series --------------------");
  int limit_for_fibonacci;
  printf("\nEnter the limit for fibonacci series\n");
  scanf("%d", &limit_for_fibonacci);
  unsigned int fibonacci_series[limit_for_fibonacci];
  get_fibonacci_series(fibonacci_series, limit_for_fibonacci);
  printf("First %d Fibonacci numbers\n", limit_for_fibonacci);
  print_fibonacci_series(fibonacci_series, limit_for_fibonacci);
}