#include <stdio.h>

unsigned int get_remaining_balance(unsigned int amount, unsigned int currency);
unsigned int get_remaining_balance(unsigned int amount, unsigned int currency)
{
  return amount % currency;
}

int print_note_count(unsigned int amount, unsigned int currency);
int print_note_count(unsigned int amount, unsigned int currency)
{
  unsigned int note_count = amount / currency;
  note_count > 0 && printf("%u x RS %u\n", note_count, currency);
  return 0;
}

int print_currency_breakdown(unsigned int amount);
int print_currency_breakdown(unsigned int amount)
{
  unsigned int remaining_balance;

  print_note_count(amount, 2000);
  remaining_balance = get_remaining_balance(amount, 2000);

  print_note_count(remaining_balance, 500);
  remaining_balance = get_remaining_balance(remaining_balance, 500);

  print_note_count(remaining_balance, 200);
  remaining_balance = get_remaining_balance(remaining_balance, 200);

  print_note_count(remaining_balance, 100);
  remaining_balance = get_remaining_balance(remaining_balance, 100);

  print_note_count(remaining_balance, 50);
  remaining_balance = get_remaining_balance(remaining_balance, 50);

  print_note_count(remaining_balance, 10);
  remaining_balance = get_remaining_balance(remaining_balance, 10);

  print_note_count(remaining_balance, 5);
  remaining_balance = get_remaining_balance(remaining_balance, 5);

  print_note_count(remaining_balance, 1);
  remaining_balance = get_remaining_balance(remaining_balance, 1);

  return 0;
}

int main(void)
{
  unsigned int amount;
  printf("-------------------- Currency Breakdown(ATM) --------------------");
  printf("\nEnter the Amount to calculate currency breakdown\n");
  scanf("%u", &amount);
  printf("\nAmount: Rs. %u\n\n", amount);
  print_currency_breakdown(amount);

  return 0;
}