/*Calculate power of a value*/
#include <stdio.h>
#include <stdlib.h>

float power(float x, int y)
{
    float p = 1;
    for (int i = 1; i <= y; i++)
    {
        p = p * x;
    }
    return p;
}

int main()
{
    float a, pow;
    int b; 

    printf("\nEnter the number: ");
    scanf("%f", &a);

    printf("Enter the value of the power: ");
    scanf("%d", &b); 

    pow = power(a, b);
    printf("The power of %.2f to %d is: %.2f", a, b, pow);


    return EXIT_SUCCESS;
}