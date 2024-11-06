#include <stdio.h>
#include <stdlib.h>

int romanize(int year, int decimal, char character)
{
    int i, j;
    j = year / decimal;
    for (i = 1; i <= j; i++)
    {
        printf("%c", character);
    }
    return (year % decimal);
    
}
int main()
{
    int yr;
    printf("\nEnter the year: ");
    scanf("%d", &yr);

    yr = romanize(yr, 1000, 'm');
    yr = romanize(yr, 500, 'd');
    yr = romanize(yr, 100, 'c');
    yr = romanize(yr, 50, 'l');
    yr = romanize(yr, 10, 'x');
    yr = romanize(yr, 5, 'v');
    romanize(yr, 1, 'i');

    return EXIT_SUCCESS;
}