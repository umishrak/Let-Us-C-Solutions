#include <stdio.h>

int main()
{
    int s1, s2, s3, larsz;

    printf("\nEnter side 1, side 2 and side 3 of a triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 > s2 && s1 > s3)
        larsz = s1;
    if(s2 > s1 && s2 > s3)
        larsz = s2;
    if(s3 > s1 && s3 > s2)
        larsz = s3;
    if((larsz < s1 + s2) || (larsz < s1 + s3) || (larsz < s2 + s3))
        printf("It is a valid triangle\n");
    else 
        printf("The triangle is not valid\n");

    return 0;
}