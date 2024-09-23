/*Match Stick Game*/
#include <stdio.h>

int main()
{
    int m = 21, p, c;

    while (m > 1)
    {
        printf("\nNo of matchstick left: %d\n", m);
        printf("\nPick up 1, 2, 3 or 4 matchstick: ");
        scanf("%d", &p);

        //check if players input is valid
        if (p > 4 || p < 1)
        {
            printf("Invalid choice! Please pick 1, 2, 3 or 4 matchsticks.\n");
            continue;
        }

        //Computer's strategy: pick up (5 - players choice).
        c = 5 - p;
        printf("Computer picked up %d matchstick(s).\n", c);

        m = m - (p + c);
        
        if (m == 1)
        {
            printf("\nNo of matchsticks left: %d\n\n", m);
            printf("You lost the game!!\n\n");
            break;
        }
        
        
    }    

    return 0;
}