#include <stdio.h>

int main()
{
  int amount, note100, note50, note10, note5, note2, note1, total;

  printf("\nEnter the amount: ");
  scanf("%d", &amount);

  note100 = amount / 100;
  amount = amount % 100;

  note50 = amount / 50;
  amount = amount % 50;

  note10 = amount / 10;
  amount = amount % 10;

  note5 = amount / 5;
  amount = amount % 5;

  note2 = amount / 2;
  amount = amount % 2;

  note1 = amount / 1;
  amount = amount % 1;

  total = note100 + note50 + note10 + note5 + note2 + note1;

  printf("Smallest number of notes: %d\n", total);

  return 0;
}