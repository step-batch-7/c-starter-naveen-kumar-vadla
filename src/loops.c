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

int even_number_series(int starting_range, int ending_range);
int even_number_series(int starting_range, int ending_range)
{
  for (int number = starting_range; number <= ending_range; number++)
  {
    is_even(number) && printf("%d ", number);
  }
  printf("\n");
  return 0;
}

long int sum_of_numbers(int starting_range, int ending_range);
long int sum_of_numbers(int starting_range, int ending_range)
{
  long int sum = 0;
  for (int number = starting_range; number <= ending_range; number++)
  {
    sum += number;
  }
  return sum;
}

long int product_of_numbers(int starting_range, int ending_range);
long int product_of_numbers(int starting_range, int ending_range)
{
  long int product = 1;
  for (int number = starting_range; number <= ending_range; number++)
  {
    product *= number;
  }
  return product;
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
  printf("Odd Number Series Between %d and %d is\n", starting_range_for_odd_series, ending_range_for_odd_series);
  odd_number_series(starting_range_for_odd_series, ending_range_for_odd_series);

  printf("-------------------- Even Number Series --------------------");
  int starting_range_for_even_series;
  int ending_range_for_even_series;
  printf("\nEnter the starting and ending range for even number series\n");
  scanf("%d", &starting_range_for_even_series);
  scanf("%d", &ending_range_for_even_series);
  printf("Even Number Series Between %d and %d is\n", starting_range_for_even_series, ending_range_for_even_series);
  even_number_series(starting_range_for_even_series, ending_range_for_even_series);

  printf("-------------------- Sum of Numbers --------------------");
  int starting_range_for_sum_of_numbers;
  int ending_range_for_sum_of_numbers;
  printf("\nEnter the starting and ending range for sum of numbers\n");
  scanf("%d", &starting_range_for_sum_of_numbers);
  scanf("%d", &ending_range_for_sum_of_numbers);
  printf("Sum Of Numbers Between %d and %d ", starting_range_for_sum_of_numbers, ending_range_for_sum_of_numbers);
  printf("is %ld\n", sum_of_numbers(starting_range_for_sum_of_numbers, ending_range_for_sum_of_numbers));

  printf("-------------------- Product of Numbers --------------------");
  int starting_range_for_product_of_numbers;
  int ending_range_for_product_of_numbers;
  printf("\nEnter the starting and ending range for product of numbers\n");
  scanf("%d", &starting_range_for_product_of_numbers);
  scanf("%d", &ending_range_for_product_of_numbers);
  printf("Product Of Numbers Between %d and %d ", starting_range_for_product_of_numbers, ending_range_for_product_of_numbers);
  printf("is %ld\n", product_of_numbers(starting_range_for_product_of_numbers, ending_range_for_product_of_numbers));
}