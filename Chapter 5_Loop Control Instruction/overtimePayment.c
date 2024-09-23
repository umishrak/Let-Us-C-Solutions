/*Overtime pay determination*/
#include <stdio.h>

int main()
{
    float overtime;
    int hr;
    int i = 1;

    while (i <= 10)
    {
        printf("\nEnter no of hours worked: ");
        scanf("%d", &hr);

        if(hr >= 40)
        {
            overtime = (hr - 40) * 120.00;
        }
        else
            {
                overtime = 0;
            }   
        printf("Hours = %d Overtime Pay = %f\n", hr, overtime);   

        i++;

    }   

    return 0;
}