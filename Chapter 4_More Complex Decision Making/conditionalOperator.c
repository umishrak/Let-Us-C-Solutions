#include <stdio.h>

int main()
{
    float sal;

    printf("\nEnter the salary: ");
    scanf("%f", &sal);

    if (sal >= 25000 && sal <= 40000 ? printf("Manager\n") : (sal >= 15000 && sal <= 25000 ? printf("Accountant\n") : (sal > 40000 ? printf("Salary not in range\n") : (sal <= 0 ? printf("Check your entry\n") : printf("Clerk\n")))))

    return 0;
}