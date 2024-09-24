/*print multiplication table of number entered by user*/
#include <stdio.h>

int main()
{
    int i, num, multiply;
    printf("\nEnter Number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        multiply = num * 1;
        printf("%d * %d = %d\n", num, i, multiply);
    }  

    return 0;
}