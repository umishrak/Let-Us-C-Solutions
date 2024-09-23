/*Leap year calculation formula
year % 400 = 0, or years % 100 != 0, or year % 4 = 0*/

#include <stdio.h>

int main()
{
    int yr;

    printf("\nEnter year: ");
    scanf("%d", &yr);

    if(yr % 400 == 0 || yr % 100 != 0 && yr % 4 == 0)
        printf("This is a leap year\n");
    else
        printf("This ain't a lep year\n");

    return 0;
}