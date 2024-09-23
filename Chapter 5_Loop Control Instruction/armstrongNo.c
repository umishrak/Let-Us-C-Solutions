/*Printing Armstrong numbers between 1 & 500*/
#include <stdio.h>

int main()
{
    int a, b, c, i = 1;

    printf("Armstrong numbers between 1 & 500 are: \n");

    while (i <= 500)
    {
        a = i % 10;
        b = (i / 10) % 10;        
        c = (i / 100) % 10;

        if((a * a * a) + (b * b * b) + (c * c * c) == i)
            printf("%d\n", i);
            
        i++;
    }

    return 0;
}