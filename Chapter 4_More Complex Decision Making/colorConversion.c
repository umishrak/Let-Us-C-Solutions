#include <stdio.h>
#include <math.h>

int main()
{
    float r, g, b;
    float c, m, y, k, w; 
    float max;   

    printf("\nEnter the Value of Red, Green and Blue (0 - 255): ");
    scanf("%f %f %f", &r, &g, &b);

    if(r == 0 && g == 0 && b == 0)
    {
        c = m = y;
        k = 1;
    }
    else 
    {
        r = r / 255;
        g = g / 255;
        b = b / 255;

        max = r;

        if(g > max)
            max = g;
        if(b > max)
            max = b;

        w = max;
        c = ((w - r) / w);
        m = ((w - g) / w);
        k = 1 - w;

    }
    
    printf("%f %f %f %f\n", c, m, y, k);

    return 0;
}