#include <stdio.h>

int main()
{
  int sub1, sub2, sub3, sub4, sub5, aggr;
  float percent;

  printf("Enter marks of 5 subjects: ");
  scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
  aggr = sub1 + sub2 + sub3 + sub4 + sub5;
  percent = aggr/5;

  printf("Aggregate Marks: %d\n", aggr);
  printf("Perentage marks: %f\n", percent);

  return 0;
}