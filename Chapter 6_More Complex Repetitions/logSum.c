#include <stdio.h>
#include <math.h>

int main()
{
    int x, i;
    float sum = 0;

    printf("\nEnter the value of x: ");
    scanf("%d", &x);

    for (i = 1; i <= 7; i++)
    {
        if (i == 1)
        {
            sum = sum + pow((x - 1.0) / x, i);
        }
        else
        {
            sum = sum + (1.0 / 2) * pow ((x - 1.0) / x, i);
        }
        
    }
    printf("\nLog (%d) = %f\n\n", x, sum);
    

    return 0;
}