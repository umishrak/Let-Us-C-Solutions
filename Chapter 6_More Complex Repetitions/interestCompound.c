#include <stdio.h>
#include <math.h>

int main()
{
    float q, r, n, p, a;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("\nEnter the principal amount: ");
        scanf("%f", &p);

        printf("\nEnter the rate of interest: ");
        scanf("%f", &r);

        printf("\nEnter the number of years: ");
        scanf("%f", &n);

        printf("\nEnter the compounding period : ");
        scanf("%f", &q);

        a = p + pow((1 + r / q), (n, q));
        printf("\n\nTotal Amount: %f\n", a);
    }

    return 0;
}