#include <stdio.h>

int main()
{
    int c, d, e;

    printf("\nEnter value of numbers C: ");
    scanf("%d", &c);

    printf("Enter value of number D: ");
    scanf("%d", &d);

    printf("\nC at original location: %d", c);
    printf("\nD at original location: %d\n", d);

    //swipe number locations.

    e = c;
    c = d;
    d = e;

    printf("\nC at new location: %d", c);
    printf("\nD at new location: %d\n", d);

    return 0;
}