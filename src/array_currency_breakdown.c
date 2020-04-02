#include <stdio.h>

int perform_currency_breakdown(unsigned int amount, unsigned int *denominations, unsigned int *no_of_notes, int length);
int perform_currency_breakdown(unsigned int amount, unsigned int *denominations, unsigned int *no_of_notes, int length)
{
  unsigned int remaining_balance = amount;
  for (int index = 0; index < length; index++)
  {
    no_of_notes[index] = remaining_balance / denominations[index];
    remaining_balance = remaining_balance % denominations[index];
  }
  return 0;
}

int print_currency_breakdown(unsigned int *denominations, unsigned int *no_of_notes, int length);
int print_currency_breakdown(unsigned int *denominations, unsigned int *no_of_notes, int length)
{
  for (int index = 0; index < length; index++)
  {
    printf("%u x RS %u\n", no_of_notes[index], denominations[index]);
  }
  return 0;
}

int main(void)
{
  unsigned int denominations[8] = {2000, 500, 200, 100, 50, 10, 5, 1};
  unsigned int no_of_notes[8];
  unsigned int amount;
  printf("-------------------- Currency Breakdown(ATM) --------------------");
  printf("\nEnter the Amount to calculate currency breakdown\n");
  scanf("%u", &amount);
  printf("\nAmount: Rs. %u\n\n", amount);
  perform_currency_breakdown(amount, denominations, no_of_notes, 8);
  print_currency_breakdown(denominations, no_of_notes, 8);

  return 0;
}
