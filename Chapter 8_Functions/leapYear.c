#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

}

int main()
{
    int yr;
    printf("\nEnter the year: ");
    scanf("%d", &yr); 

    if (isLeapYear(yr))
    {
        printf("The year %d is a leap year\n\n", yr);
    }
    else
    {
        printf("The year %d is not a leap year\n\n", yr);
    }
    

    
    return EXIT_SUCCESS ;
}