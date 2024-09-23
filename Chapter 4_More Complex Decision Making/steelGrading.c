#include <stdio.h>

int main()
{
    float hard, carbon, tensile;

    printf("\nEnter hardness of the steel: ");
    scanf("%f", &hard);

    printf("\nEnter carbon of the steel: ");
    scanf("%f", &carbon);

    printf("\nEnter tensility of the steel: ");
    scanf("%f", &tensile);

    printf("\n");

    if(hard > 50 && carbon <0.7 && tensile > 5600)
        printf("Grade 10\n");

    else if(hard > 50 && carbon <0.7 && tensile <= 5600)
        printf("Grade 9\n");

    else if(hard <= 50 && carbon <0.7 && tensile > 5600)
        printf("Grade 8\n");

    else if(hard > 50 && carbon >0.7 && tensile > 5600)
        printf("Grade 7\n");    

    else if(hard > 50 || carbon <0.7 || tensile > 5600)
        printf("Grade 6\n");

    else
        printf("Grade 5\n");

    return 0;
}