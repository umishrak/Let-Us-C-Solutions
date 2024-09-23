/*Count number of positives, negatives and zeros*/
#include <stdio.h>

int main()
{
    int num, pos, neg, zero;
    char ans = 'Y';

    pos = neg = zero = 0;

    while (ans == 'Y' || ans == 'y')
    {
        printf("\nEnter the number: ");
        scanf("%d", &num);

        if (num == 0)
        {
           zero++;
        }
        if (num > 0)
        {
            pos++;
        }
        if (num < 0)
        {
            neg++;
        }
        fflush(stdin); //clears standard input system
        printf("\nDo you want to continut? ");
        scanf("%c", &ans);
        
    }
    printf("You entered %d positive numbers\n", pos);
    printf("You entered %d negative numbers\n", neg);
    printf("You entered %d zero numbers\n", zero);    

    return 0;
}