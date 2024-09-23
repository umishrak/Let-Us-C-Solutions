/*Compare value of one number raised to another*/
#include <stdio.h>

int main()
{
    float x, power;
    int y, i;

    printf("\nEnter the value of two numbers: ");
    scanf("%f %d", &x, &y);

    power = i = 1;

    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%f to the power of %d is %f", x, y, power);

    return 0;
}