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
  return (number_one + number_two + number_three) / 3.00;
}

int greatest_of_two(int number_one, int number_two);
int greatest_of_two(int number_one, int number_two)
{
  return number_one > number_two ? number_one : number_two;
}

int greatest_of_three(int number_one, int number_two, int number_three);
int greatest_of_three(int number_one, int number_two, int number_three)
{
  return greatest_of_two(greatest_of_two(number_one, number_two), number_three);
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
  int number_one_for_greatest;
  int number_two_for_greatest;
  int number_three_for_greatest;

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

  printf("\nEnter 3 numbers two find greatest of those numbers \n");
  scanf("%d", &number_one_for_greatest);
  scanf("%d", &number_two_for_greatest);
  scanf("%d", &number_three_for_greatest);

  printf("\nThe number %d is %s \n", number_for_even, is_even(number_for_even) ? "even" : "not even");
  printf("The number %d is %s \n", number_for_odd, is_odd(number_for_odd) ? "odd" : "not odd");
  printf("Square of %d is %d \n", number_for_square, square(number_for_square));
  printf("Cube of %d is %d \n", number_for_cube, cube(number_for_cube));
  printf("Average of %d %d %d is %f \n", number_one_for_average, number_two_for_average, number_three_for_average, average(number_one_for_average, number_two_for_average, number_three_for_average));
  printf("Greatest of %d %d %d is %d \n", number_one_for_greatest, number_two_for_greatest, number_three_for_greatest, greatest_of_three(number_one_for_greatest, number_two_for_greatest, number_three_for_greatest));
}
