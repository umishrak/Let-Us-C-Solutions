/*Population growth rate of a decade*/
#include <stdio.h>

int main()
{
    int initial_population = 100000, yr;
    float population, r;

    r = 10;
    population = initial_population ;

    for (yr = 1; yr <= 10; yr++)
    {
        // Decrease the population by 10% each year, reversing the growth
        population = population / (1 + r / 100);
        
        printf("Population %d years ago = %.0f\n", yr, population);
    }
    

    return 0;
}