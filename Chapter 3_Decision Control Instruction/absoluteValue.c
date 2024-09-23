#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("\nEnter any number: ");
    scanf("%d", &n);

    //Solution 1 - Using if statement
    /*if(n < 0)
    n = n * -1;
    printf("The absolute number of the entered number is: %d", n);*/

    //Solution 2 - Using Math Function of stdlib of C
    n = abs(n);
    printf("The absolute number of the entered number is: %d", n);

    return 0;
}