#include <stdio.h>
#include <math.h>

int main()
{
  float l1, l2, g1, g2, d;

  printf("\nEneter the Latitude and Longitude of place 1: ");
  scanf("%f %f", &l1, &g1);

  printf("\nEneter the Latitude and Longitude of place 2: ");
  scanf("%f %f", &l2, &g2);

  //Covert degree to radians

  l1 = l1 * 3.14/180;
  l2 = l2 * 3.14/180;

  g1 = g1 * 3.14/180;
  g2 = g2 * 3.14/180; 

  //convert radians to nautical miles

  d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1)); 
  printf("\nDistance between Place 1 and Place 2 is: %f Nautical Miles", d);

  return 0;
}