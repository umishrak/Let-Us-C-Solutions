#include <stdio.h>
#include <math.h>

int main()
{
    int s1, s2, s3, a, b, c;

    printf("\nEnter the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 != s2 && s2 != s3 && s3 != s1)
        printf("This is a scalaner triangle\n");
    if(s1 == s2 && s2 == s3)
        printf("This is a equilateral triangle\n");
    if((s1 == s2 && s2 != s3) || (s2 == s3 && s3 != s1) || (s1 == s3 && s3 != s2))
        printf("This is a isosceles triangle\n");
    if(s1 == s2 && s2 == s3)
        printf("This is a equilateral triangle\n");
    a = pow(s1, 2) == pow(s2, 2) + pow(s3, 2);
    b = pow(s2, 2) == pow(s1, 2) + pow(s3, 2);
    c = pow(s3, 2) == pow(s1, 2) + pow(s2, 2);

    if(a || b || c)
        printf("This is a right angle triangle\n");

    return 0;
}