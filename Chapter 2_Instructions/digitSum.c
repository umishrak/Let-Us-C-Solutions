/*Calculate sum of 5 digits entered through Keyboard
Author: Utpal Kant Mishra, Date: 28.08.2024*/

#include <stdio.h>

int main()
{
    int num, n, d; //num = entered number, n = balance number, d = digit
    int sum = 0;

    printf("\nEnter a five digit number: ");
    scanf("%d", &num);

    d = num % 10;   //Last (5th) digit out
    n = num / 10;   //Remaining (4) Digits
    sum = sum + d;  //Sum updated by adding extracted (5th) digit

    d = n % 10;   
    n = n / 10;   
    sum = sum + d;

    d = n % 10;   
    n = n / 10;   
    sum = sum + d;

    d = n % 10;   
    n = n / 10;   
    sum = sum + d;

    d = n % 10;        
    sum = sum + d;

    printf("Sum of five digits of %d is %d\n", num, sum);

    return 0;
}