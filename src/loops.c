#include <stdio.h>

unsigned int factorial(int number);
unsigned int factorial(int number)
{
  unsigned int fact = 1;
  for (int index = 1; index <= number; index++)
  {
    fact *= index;
  }
  return fact;
}

int fibonacci_series(int limit);
int fibonacci_series(int limit)
{
  unsigned int first_term = 0;
  unsigned int second_term = 1;
  for (int index = 1; index <= limit; index++)
  {
    printf("%u ", first_term);
    int temp = second_term;
    second_term += first_term;
    first_term = temp;
  }
  printf("\n");
  return 0;
}

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

int odd_number_series(int starting_range, int ending_range);
int odd_number_series(int starting_range, int ending_range)
{
  for (int number = starting_range; number <= ending_range; number++)
  {
    is_odd(number) && printf("%d ", number);
  }
  printf("\n");
  return 0;
}

int main(void)
{
  printf("-------------------- Factorial --------------------");
  int number_for_factorial;
  printf("\nEnter the number you want to calculate factorial\n");
  scanf("%d", &number_for_factorial);
  printf("Factorial of %d is %u\n", number_for_factorial, factorial(number_for_factorial));

  printf("-------------------- Fibonacci Series --------------------");
  int number_for_fibonacci;
  printf("\nEnter the limit for fibonacci series\n");
  scanf("%d", &number_for_fibonacci);
  printf("First %d Fibonacci numbers\n", number_for_fibonacci);
  fibonacci_series(number_for_fibonacci);

  printf("-------------------- Odd Number Series --------------------");
  int starting_range_for_odd_series;
  int ending_range_for_odd_series;
  printf("\nEnter the starting and ending range for odd number series\n");
  scanf("%d", &starting_range_for_odd_series);
  scanf("%d", &ending_range_for_odd_series);
  printf("Odd number Series Between %d and %d\n", starting_range_for_odd_series, ending_range_for_odd_series);
  odd_number_series(starting_range_for_odd_series, ending_range_for_odd_series);
}