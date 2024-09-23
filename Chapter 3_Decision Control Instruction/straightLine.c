#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    int s1, s2, s3;

    printf("\nEnter the x1 and y1 coordinates of the first point: ");
    scanf("%d %d", &x1, &y1);

    printf("\nEnter the x2 and y2 coordinates of the second point: ");
    scanf("%d %d", &x2, &y2);

    printf("\nEnter the x3 and y3 coordinates of the third point: ");
    scanf("%d %d", &x1, &y1);

    //Calculate slope of line between each pair of points.
    s1 = abs(y2 - y1) / abs(x2 - x1);
    s2 = abs(y3 - y1) / abs(x3 - x1);
    s3 = abs(y3 - y2) / abs(x3 - x2);

    printf("\n");

    if ((s1 == s2) && (s2 == s3))
        printf("Points are colinear\n");
    else
        printf("Points are NOT colinear\n");

    return 0;
}