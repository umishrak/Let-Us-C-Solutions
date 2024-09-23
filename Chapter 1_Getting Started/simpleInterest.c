/*The First Program, calculation of Simple Interest
Author: Utpal Kant Mishra Date: 26/08/2024*/

#include <stdio.h>

int main()
{
            /*p = Principal Amount, n = number of years
            r = rate of interest, si = simple interest*/
            int p, n;
            float r, si;

            //Assigning fixed value
            /*p = 1000;
            n = 3;
            r = 8.5;*/

            //Seeking user's inputs
            printf("Please enter the values of p, n & r: ");
            scanf("%d %d %f", &p, &n, &r);

            //Formula of simple interest
            si = p*n*r/100;

            printf("%f\n", si);

            return 0;

}