#include <stdio.h>

int main()
{
    float hyp, per, b, sum;

    printf("\nEnter the three angles of the triangle: ");
    scanf("%f %f %f", &hyp, &per, &b);

    sum = hyp + per + b;

    if(sum != 180)
        printf("Triangle is not valid\n");
    else
        printf("The triangle is valid");

    return 0;
}