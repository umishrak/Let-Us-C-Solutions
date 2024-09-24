/*Generate Pythagorian Triplets
Pythagorian Triple formula = p2 + q2 = r2*/
#include <stdio.h>
#include <math.h>

int main()
{
    int p, q, r;
    for (p = 1; p <= 30; p++)
    {
        for (q = 1; q <= 30; q++)
        {
            for (r = 1; r <= 30; r++)
            {
                if (pow(p, 2) + pow(q, 2) == pow(r, 2));
                {
                    printf("%d %d %d\n", p, q, r);
                }
                
            }
            
        }
        
    }   

    return 0;
}