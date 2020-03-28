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

int square(int number);
int square(int number)
{
  return number * number;
}

int cube(int number);
int cube(int number)
{
  return number * square(number);
}

float average(int number_one, int number_two, int number_three);
float average(int number_one, int number_two, int number_three)
{
  return (number_one + number_two + number_three) / 3;
}

int main(void)
{
  int number_for_even;
  int number_for_odd;
  int number_for_square;
  int number_for_cube;
  int number_one_for_average;
  int number_two_for_average;
  int number_three_for_average;

  printf("\nEnter a number for is_even \n");
  scanf("%d", &number_for_even);

  printf("\nEnter a number for is_odd \n");
  scanf("%d", &number_for_odd);

  printf("\nEnter a number for square \n");
  scanf("%d", &number_for_square);

  printf("\nEnter a number for cube \n");
  scanf("%d", &number_for_cube);

  printf("\nEnter 3 numbers two calculate average \n");
  scanf("%d", &number_one_for_average);
  scanf("%d", &number_two_for_average);
  scanf("%d", &number_three_for_average);

  printf("\nThe number %d is %s \n", number_for_even, is_even(number_for_even) ? "even" : "not even");
  printf("The number %d is %s \n", number_for_odd, is_odd(number_for_odd) ? "odd" : "not odd");
  printf("Square of %d is %d \n", number_for_square, square(number_for_square));
  printf("Cube of %d is %d \n", number_for_cube, cube(number_for_cube));
  printf("Average of %d %d %d is %f \n", number_one_for_average, number_two_for_average, number_three_for_average, average(number_one_for_average, number_two_for_average, number_three_for_average));
}
