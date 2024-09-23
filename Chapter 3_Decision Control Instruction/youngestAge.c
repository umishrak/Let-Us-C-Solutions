#include <stdio.h>
//#include <math.h>

int main()
{
  int r, s, a, young;
  char *young_name;

  printf("\nEnter the Age of Ram, Shyam & Ajay: ");
  scanf("%d %d %d", &r, &s, &a);

  if(r < s && r < a)
    {young_name = "Ram";
    young = r;}
  else if(s < r && s < a)
    {young_name = "Shyam";
    young = s;}
  else  
    {young_name = "Ajay";
    young = a;}
  
  printf("Youngest among Ram(%d) Shyam(%d) and Ajay(%d) is:  %s(%d)\n", r, s, a, young_name, young);

  return 0;
}