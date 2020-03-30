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

int print_fibonacci_series(int limit);
int print_fibonacci_series(int limit)
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

int print_odd_number_series(int starting_range, int ending_range);
int print_odd_number_series(int starting_range, int ending_range)
{
  for (int number = starting_range; number <= ending_range; number++)
  {
    is_odd(number) && printf("%d ", number);
  }
  printf("\n");
  return 0;
}

int print_even_number_series(int starting_range, int ending_range);
int print_even_number_series(int starting_range, int ending_range)
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

long int sum_of_even_numbers(int starting_range, int ending_range);
long int sum_of_even_numbers(int starting_range, int ending_range)
{
  long int sum = 0;
  for (int number = starting_range; number <= ending_range; number++)
  {
    if (is_even(number))
    {
      sum += number;
    }
  }
  return sum;
}

int print_odd_number_series_backwards(int starting_range, int ending_range);
int print_odd_number_series_backwards(int starting_range, int ending_range)
{
  for (int number = starting_range; number >= ending_range; number--)
  {
    is_odd(number) && printf("%d ", number);
  }
  printf("\n");
  return 0;
}

int print_multiplication_table(int number, int limit);
int print_multiplication_table(int number, int limit)
{
  for (int index = 1; index <= limit; index++)
  {
    printf("%d X %d = %d\n", number, index, number * index);
  }
  return 0;
}

int print_every_nth_number(int starting_range, int ending_range, int increment_by);
int print_every_nth_number(int starting_range, int ending_range, int increment_by)
{
  for (int number = starting_range; number <= ending_range; number += increment_by)
  {
    printf("%d ", number);
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
  print_fibonacci_series(number_for_fibonacci);

  printf("-------------------- Odd Number Series --------------------");
  int starting_range_for_odd_series;
  int ending_range_for_odd_series;
  printf("\nEnter the starting and ending range for odd number series\n");
  scanf("%d", &starting_range_for_odd_series);
  scanf("%d", &ending_range_for_odd_series);
  printf("Odd Number Series Between %d and %d is\n", starting_range_for_odd_series, ending_range_for_odd_series);
  print_odd_number_series(starting_range_for_odd_series, ending_range_for_odd_series);

  printf("-------------------- Even Number Series --------------------");
  int starting_range_for_even_series;
  int ending_range_for_even_series;
  printf("\nEnter the starting and ending range for even number series\n");
  scanf("%d", &starting_range_for_even_series);
  scanf("%d", &ending_range_for_even_series);
  printf("Even Number Series Between %d and %d is\n", starting_range_for_even_series, ending_range_for_even_series);
  print_even_number_series(starting_range_for_even_series, ending_range_for_even_series);

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

  printf("-------------------- Sum of Even Numbers --------------------");
  int starting_range_for_sum_of_even_numbers;
  int ending_range_for_sum_of_even_numbers;
  printf("\nEnter the starting and ending range for sum of even numbers\n");
  scanf("%d", &starting_range_for_sum_of_even_numbers);
  scanf("%d", &ending_range_for_sum_of_even_numbers);
  printf("Sum Of Even Numbers Between %d and %d ", starting_range_for_sum_of_even_numbers, ending_range_for_sum_of_even_numbers);
  printf("is %ld\n", sum_of_even_numbers(starting_range_for_sum_of_even_numbers, ending_range_for_sum_of_even_numbers));

  printf("-------------------- Odd Number Series Backwards --------------------");
  int starting_range_for_odd_series_backwards;
  int ending_range_for_odd_series_backwards;
  printf("\nEnter the starting and ending range for odd number series backwards\n");
  scanf("%d", &starting_range_for_odd_series_backwards);
  scanf("%d", &ending_range_for_odd_series_backwards);
  printf("Odd Number Series Backwards Between %d and %d is\n", starting_range_for_odd_series_backwards, ending_range_for_odd_series_backwards);
  print_odd_number_series_backwards(starting_range_for_odd_series_backwards, ending_range_for_odd_series_backwards);

  printf("-------------------- Multiplication Table --------------------");
  int number_for_multiplication_table;
  int limit_for_multiplication_table;
  printf("\nEnter the number and limit for multiplication table\n");
  scanf("%d", &number_for_multiplication_table);
  scanf("%d", &limit_for_multiplication_table);
  printf("Multiplication Table of %d upto %d is\n", number_for_multiplication_table, limit_for_multiplication_table);
  print_multiplication_table(number_for_multiplication_table, limit_for_multiplication_table);

  printf("-------------------- Every nth Number --------------------");
  int starting_range_for_every_nth_number;
  int ending_range_for_every_nth_number;
  int nth_value;
  printf("\nEnter the number and limit for multiplication table\n");
  scanf("%d", &starting_range_for_every_nth_number);
  scanf("%d", &ending_range_for_every_nth_number);
  printf("Enter nth value\n");
  scanf("%d", &nth_value);
  printf("Every %dth Number Between %d and %d is\n", nth_value, starting_range_for_every_nth_number, ending_range_for_every_nth_number);
  print_every_nth_number(starting_range_for_every_nth_number, ending_range_for_every_nth_number, nth_value);

  return 0;
}