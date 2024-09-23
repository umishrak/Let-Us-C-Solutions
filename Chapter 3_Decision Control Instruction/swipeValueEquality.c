#include <stdio.h>
#include <math.h>

int main()
{
  int n, a, num; 
  long int revno = 0;

  printf("\nEnter a five digit number: ");
  scanf("%d", &n);

  num = n;

  //Fith digit
  a = n % 10;
  n = n / 10;
  revno = revno + a * 10000L;

  //Fourth digit
  a = n % 10;
  n = n / 10;
  revno = revno + a * 1000;

  //Third digit
  a = n % 10;
  n = n / 10;
  revno = revno + a * 100;

  //Second digit
  a = n % 10;
  n = n / 10;
  revno = revno + a * 10;

  //First digit
  a = n % 10;  
  revno = revno + a;

  if(num == revno)
    printf("Given no and it's reverse are equal\n");
  
  else
    printf("Given no and it's reverse are not equal\n");

  
  return 0;
}

