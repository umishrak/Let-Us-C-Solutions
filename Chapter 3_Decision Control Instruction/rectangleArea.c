#include <stdio.h>

int main()
{
    int len, bred, peri, area;

    printf("\nEnter the Length and Breadth of the Rectanle: ");
    scanf("%d %d", &len, &bred);

    area = len * bred;
    peri = (len + bred) * 2;

    if(area > peri)
        printf("The area of the rectangle is greater than its perimeter\n");
    else
        printf("The area of the rectangle is less than its perimeter \n");

    return 0;
}