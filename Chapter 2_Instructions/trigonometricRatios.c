#include <stdio.h>
#include <math.h>

int main()
{
    float a, s, c, t;

    printf("\nEnter the value of the Angle: ");
    scanf("%f", &a);

    //convert angle to radians.
    a = a * 3.14/180;
    s = sin(a);
    c = cos(a);
    t = tan(a);

    printf("%f %f %f\n", s, c, t);

    return 0;
}