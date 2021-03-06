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

float average(float number_one, float number_two, float number_three);
float average(float number_one, float number_two, float number_three)
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

float convert_to_fahrenheit(int temperature);
float convert_to_fahrenheit(int temperature)
{
  return temperature * (9.00 / 5.00) + 32;
}

int smallest_of_two(int number_one, int number_two);
int smallest_of_two(int number_one, int number_two)
{
  return number_one < number_two ? number_one : number_two;
}

int gcd(int number_one, int number_two);
int gcd(int number_one, int number_two)
{
  int divident = greatest_of_two(number_one, number_two);
  int divisor = smallest_of_two(number_one, number_two);
  int remainder = divisor;
  while (remainder > 0)
  {
    int previous_divisor = divisor;
    divisor = remainder;
    remainder = divident % divisor;
    divident = previous_divisor;
  }
  return divisor;
}

int lcm(int number_one, int number_two);
int lcm(int number_one, int number_two)
{
  return (number_one * number_two) / gcd(number_one, number_two);
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
  float number_one_for_average;
  float number_two_for_average;
  float number_three_for_average;
  printf("\nEnter 3 numbers two calculate average \n");
  scanf("%f", &number_one_for_average);
  scanf("%f", &number_two_for_average);
  scanf("%f", &number_three_for_average);
  printf("\nAverage of %f %f %f ", number_one_for_average, number_two_for_average, number_three_for_average);
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
  printf("\nPrinciple Amount %ldRs.\n", principle_amount_for_SI);
  printf("Rate of Interest %d%%\n", rate_of_interest_for_SI);
  printf("Time Period %dyrs\n", time_period_for_SI);
  printf("Simple Interest is %f \n", simple_interest(principle_amount_for_SI, rate_of_interest_for_SI, time_period_for_SI));

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
  printf("\nPrinciple Amount %ldRs.\n", principle_amount_for_CI);
  printf("Rate of Interest %d%%\n", rate_of_interest_for_CI);
  printf("Time Period %dyrs\n", time_period_for_CI);
  printf("No of Compounds %d per year\n", compounds_per_year_for_CI);
  printf("Compound Interest is %f \n", compound_interest(principle_amount_for_CI, rate_of_interest_for_CI, time_period_for_CI, compounds_per_year_for_CI));

  printf("-------------------- fahrenheit to centigrade --------------------");
  int temperature_in_fahrenheit;
  printf("\nEnter the temperature in fahrenheit to convert into centigrade \n");
  scanf("%d", &temperature_in_fahrenheit);
  printf("\nTemperature in Fahrenheit %dF\n", temperature_in_fahrenheit);
  printf("Temperature in Centigrade %fC\n", convert_to_centigrade(temperature_in_fahrenheit));

  printf("-------------------- centigrade to fahrenheit --------------------");
  int temperature_in_centigrade;
  printf("\nEnter the temperature in centigrade to convert into fahrenheit \n");
  scanf("%d", &temperature_in_centigrade);
  printf("\nTemperature in Centigrade %dC\n", temperature_in_centigrade);
  printf("Temperature in Fahrenheit %fF\n", convert_to_fahrenheit(temperature_in_centigrade));

  printf("-------------------- greatest common divisor (GCD) --------------------");
  int number_one_for_gcd;
  int number_two_for_gcd;
  printf("\nEnter 2 numbers two find greatest common divisor (GCD) of those numbers \n");
  scanf("%d", &number_one_for_gcd);
  scanf("%d", &number_two_for_gcd);
  printf("\nGreatest Common Divisor (GCD) of %d %d ", number_one_for_gcd, number_two_for_gcd);
  printf("is %d \n", gcd(number_one_for_gcd, number_two_for_gcd));

  printf("-------------------- least common multiple (LCM) --------------------");
  int number_one_for_lcm;
  int number_two_for_lcm;
  printf("\nEnter 2 numbers two find least common multiple (LCM) of those numbers \n");
  scanf("%d", &number_one_for_lcm);
  scanf("%d", &number_two_for_lcm);
  printf("\nLeast Common Multiple (LCM) of %d %d ", number_one_for_lcm, number_two_for_lcm);
  printf("is %d \n", lcm(number_one_for_lcm, number_two_for_lcm));

  return 0;
}
