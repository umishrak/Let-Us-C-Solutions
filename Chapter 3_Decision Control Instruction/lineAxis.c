#include <stdio.h>

int main()
{
    int x, y;

    printf("\nEnter X and Y Coordiates of a point: ");
    scanf("%d %d", &x, &y);

    if((x == 0) && (y == 0))
        printf("\nThe points lie on origin");
    else
        if((x == 0) && (y != 0))
            printf("\nThe points lie on Y - Axis");
        else
            if((x != 0) && (y == 0))
                printf("\nThe points lie on X - Axis");
            else
                printf("\nThe points neither lies on Orgin, or X or on Y - Axises`");

    return 0;
}