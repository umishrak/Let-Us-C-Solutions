/* Wind Chill Factor(wcf) Formula: 35.74 + 0.6215t + (0.4275t - 35.75)* v power 0.16*/

#include <stdio.h>
#include <math.h>

int main()
{
  float t, v, wcf;
  
  printf("\nEnter Temperature and Wind Velocity: ");
  scanf("%f %f", &t, &v);

  wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow (v, 0.16);

  printf("Wind chill factor of is: %f", wcf);

  return 0;
} 