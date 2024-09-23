#include <stdio.h>

int main()
{
   float km, meter, feet, inch, centimeter;

   printf("Enter the distance in km: ");
   scanf("%f", &km);

   meter = km * 1000;
   centimeter = meter * 100;
   inch = centimeter / 2.54;
   feet = inch / 12;

   printf("Distance in Meter = %f\n", meter);
   printf("Distance in Centimeter = %f\n", centimeter);
   printf("Distance in Feet = %f\n", feet);
   printf("Distance in Inch = %f\n", inch);

   return 0;
}