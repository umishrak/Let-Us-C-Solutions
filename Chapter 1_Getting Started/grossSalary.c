/*Calculate Ramesh's gross salary*/

#include <stdio.h>

int main()
{
            float sal, da, hra, gsal;

            printf("Enter of Basic Salary: ");
            scanf("%f", &sal);

            da = 0.40 * sal;
            hra = 0.20 * sal;
            gsal = sal + da + hra;

            printf("%f", gsal);

            return 0;
}