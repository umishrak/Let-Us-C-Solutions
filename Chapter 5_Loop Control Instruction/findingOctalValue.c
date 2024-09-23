#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, rem, oct, p;
    printf("\nEnter any number: ");
    scanf("%d", &n1);
    n2 = n1;

    p = oct = 0;//p is power to the 10 base.

    while (n1 > 0)
    {
        rem = n1 % 8; //Get the remainder(equivalent to a digit in octal)
        n1 = n1 / 8; //Update the number by dividing by 8 (equivalent to shifting right in base-8)
        oct = oct + rem * pow(10.0, p); //Place the remainder in the correct place in the octal result
        p++;
    }
    printf("The octal equivalent of %d is %d\n", n2, oct);    

    return 0;
}