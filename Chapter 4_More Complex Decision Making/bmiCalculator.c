#include <stdio.h>
#include <math.h>

int main()
{
    float w, h, BMI;

    printf("\nEnter Weight of the person in Kilogram: " );
    scanf("%f", &w);

    printf("\nEnter height of the person in meter: " );
    scanf("%f", &h);

    BMI = w / pow(h, 2); 

    printf("\nBMI of the person is: %f", BMI);

    if(BMI < 15)
        printf("BMI Category: Starvation");

    else if(BMI >= 15.1 && BMI <= 17.5)
        printf("BMI Category: Anorexic");

    else if(BMI >= 17.6 && BMI <= 18.5)
        printf("BMI Category: Underweight");

    else if(BMI >= 18.6 && BMI <= 24.9)
        printf("BMI Category: Ideal");

    else if(BMI >= 25 && BMI <= 25.9)
        printf("BMI Category: Overweight");

    else if(BMI >= 30 && BMI <= 30.9)
        printf("BMI Category: Obese");

    else 
        printf("BMI Category: Morbidly Obese");  


    return 0;
}