#include <stdio.h>
#include <math.h>

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

float simple_interest(long int principle, int interest_rate, int time_period);
float simple_interest(long int principle, int interest_rate, int time_period)
{
  return (principle * interest_rate * time_period) / 100.00;
}

float compound_interest(long int principle, int interest_rate, int time_period, int compounds_per_year);
float compound_interest(long int principle, int interest_rate, int time_period, int compounds_per_year)
{
  return (principle * pow(1 + (interest_rate / (100.00 * compounds_per_year)), (compounds_per_year * time_period))) - principle;
}

float convert_to_centigrade(int temperature);
float convert_to_centigrade(int temperature)
{
  return (temperature - 32) * (5.00 / 9.00);
}

int main(void)
{
  printf("-------------------- is_even --------------------");
  int number_for_even;
  printf("\nEnter a number for is_even \n");
  scanf("%d", &number_for_even);
  printf("\nThe number %d is %s \n", number_for_even, is_even(number_for_even) ? "even" : "not even");

  printf("-------------------- is_odd --------------------");
  int number_for_odd;
  printf("\nEnter a number for is_odd \n");
  scanf("%d", &number_for_odd);
  printf("\nThe number %d is %s \n", number_for_odd, is_odd(number_for_odd) ? "odd" : "not odd");

  printf("-------------------- square --------------------");
  int number_for_square;
  printf("\nEnter a number for square \n");
  scanf("%d", &number_for_square);
  printf("\nSquare of %d is %d \n", number_for_square, square(number_for_square));

  printf("-------------------- cube --------------------");
  int number_for_cube;
  printf("\nEnter a number for cube \n");
  scanf("%d", &number_for_cube);
  printf("\nCube of %d is %d \n", number_for_cube, cube(number_for_cube));

  printf("-------------------- average --------------------");
  int number_one_for_average;
  int number_two_for_average;
  int number_three_for_average;
  printf("\nEnter 3 numbers two calculate average \n");
  scanf("%d", &number_one_for_average);
  scanf("%d", &number_two_for_average);
  scanf("%d", &number_three_for_average);
  printf("\nAverage of %d %d %d ", number_one_for_average, number_two_for_average, number_three_for_average);
  printf("is %f \n", average(number_one_for_average, number_two_for_average, number_three_for_average));

  printf("-------------------- greatest of 3 --------------------");
  int number_one_for_greatest;
  int number_two_for_greatest;
  int number_three_for_greatest;
  printf("\nEnter 3 numbers two find greatest of those numbers \n");
  scanf("%d", &number_one_for_greatest);
  scanf("%d", &number_two_for_greatest);
  scanf("%d", &number_three_for_greatest);
  printf("\nGreatest of %d %d %d ", number_one_for_greatest, number_two_for_greatest, number_three_for_greatest);
  printf("is %d \n", greatest_of_three(number_one_for_greatest, number_two_for_greatest, number_three_for_greatest));

  printf("-------------------- simple interest --------------------");
  long int principle_amount_for_SI;
  int rate_of_interest_for_SI;
  int time_period_for_SI;
  printf("\nEnter the required data to calculate Simple Interest \n");
  printf("Enter principle amount for Simple Interest in Rs.\n");
  scanf("%ld", &principle_amount_for_SI);
  printf("Enter rate of interest for Simple Interest \n");
  scanf("%d", &rate_of_interest_for_SI);
  printf("Enter time period for Simple Interest in years\n");
  scanf("%d", &time_period_for_SI);
  printf("\nSimple Interest for \n");
  printf(" Principle Amount %ld \n", principle_amount_for_SI);
  printf(" Rate of Interest %d \n", rate_of_interest_for_SI);
  printf(" Time Period %d years \n", time_period_for_SI);
  printf("is %f \n", simple_interest(principle_amount_for_SI, rate_of_interest_for_SI, time_period_for_SI));

  printf("-------------------- compound interest --------------------");
  long int principle_amount_for_CI;
  int rate_of_interest_for_CI;
  int time_period_for_CI;
  int compounds_per_year_for_CI;
  printf("\nEnter the required data to calculate Compound Interest \n");
  printf("Enter principle amount for Compound Interest in Rs.\n");
  scanf("%ld", &principle_amount_for_CI);
  printf("Enter rate of interest for Compound Interest \n");
  scanf("%d", &rate_of_interest_for_CI);
  printf("Enter time period for Compound Interest in years\n");
  scanf("%d", &time_period_for_CI);
  printf("Enter number of compounds per year for Compound Interest \n");
  scanf("%d", &compounds_per_year_for_CI);
  printf("\nCompound Interest for \n");
  printf(" Principle Amount %ld \n", principle_amount_for_CI);
  printf(" Rate of Interest %d \n", rate_of_interest_for_CI);
  printf(" Time Period %d years \n", time_period_for_CI);
  printf(" No of Compounds in year %d \n", compounds_per_year_for_CI);
  printf("is %f \n", compound_interest(principle_amount_for_CI, rate_of_interest_for_CI, time_period_for_CI, compounds_per_year_for_CI));

  printf("-------------------- fahrenheit to centigrade --------------------");
  int temperature_in_fahrenheit;
  printf("\nEnter the temperature in fahrenheit to convert into centigrade \n");
  scanf("%d", &temperature_in_fahrenheit);
  printf("\nTemperature in centigrade for fahrenheit temperature %d ", temperature_in_fahrenheit);
  printf("is %f\n", convert_to_centigrade(temperature_in_fahrenheit));
}
