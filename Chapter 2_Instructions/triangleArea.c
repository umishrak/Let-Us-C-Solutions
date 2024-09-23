/*Finding area of a Triangle
Author: Utpal Kant Mishra Date: 27.08.2024*/

#include <stdio.h>
#include <math.h>

int main()
{
  /*Formula: To solve this, the program uses Heron's formula. This formula allows you to 
  calculate the area of a triangle when you know the lengths of all three sides. 
  Heron's Formula:
  Area (A) = sqrt(S * (S - A) * (S-B) * (S-C)); where S is Semi - Perimeter of the trianle
  and S = A + B + C/2 */

  float a, b, c, s, area;

  printf("\nEnter sides of triangle: ");
  scanf("%f %f %f", &a, &b, &c);

  s = (a + b + c)/2;
  area = sqrt(s * (s -a) * (s - b) * (s - c));

  printf("Area of Triangle = %f\n", area);

  return 0;
}