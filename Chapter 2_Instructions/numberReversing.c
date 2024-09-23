#include <stdio.h>

int main()
{
  int n, a1, a2, a3, a4, a5;
  long int revno;

  printf("\n Enter a 5 digits number less than 32767: ");
  scanf("%d", &n);

  a5 = n % 10;
  n = n / 10;

  a4 = n % 10;
  n = n / 10;

  a3 = n % 10;
  n = n / 10;

  a2 = n % 10;
  n = n / 10;

  a1 = n % 10;
  
  revno = a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + a1;
  printf("The reversed number is %ld\n", revno);
  printf("%ld", sizeof(&n));

}