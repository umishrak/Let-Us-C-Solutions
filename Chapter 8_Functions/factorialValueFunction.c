/*Calculate factorial value of an integer using a function*/
#include <stdio.h>
#include <stdlib.h>

int fact(int number)
{
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

int main()
{
    int num;
    int factor;

    printf("\nEnter an integer: ");
    scanf("%d", &num);

    factor = fact(num);
    printf("Factorial value of %d is: %d\n\n", num, factor);

    return EXIT_SUCCESS;
}