#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r;
    int dis, d;

    printf("\nEnter Radius, X and Y Coordinates of the circle: ");
    scanf("%d %d %d", &r, &x, &y);

    dis = pow(x,2) + pow(y,2);
    d = pow(r, 2);	

    if(dis == d)
        printf("Point is on the circle\n");
    else
        {
            if( dis > d)
                printf("Point is outside the circle\n");
            else
                printf("Point is inside the circle\n");
        }

    return 0;
}