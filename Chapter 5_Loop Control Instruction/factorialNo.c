/*Calculating factorial value of a number*/
#include <stdio.h>

int main()
{
    int num, i, fact;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    fact = i = 1;

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial Value of %d = %d\n", num, fact);    

    return 0;
}