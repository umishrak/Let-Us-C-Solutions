/*Write a program to add first seven terms of the series usinf for loop*/
#include <stdio.h>

int main()
{
    int i = 1, j;
    float fact, sum = 0.0; // fact is for factorial

    for (i = 1; i <= 7; i++)
    {
        fact = 1.0; // Initialize factorial to 1 for each i

        // This loop calculates the factorial of i
        for (j = 1; j <= i; j++)
            {
                fact = fact * j;
            }            
        
        sum = sum + i/fact;        
    }
    printf("Sum of series = %f\n", sum);

    return 0;
}

/*Summary of the code:
i: This variable controls the outer loop and runs from 1 to 7. It represents each term in the series 1/𝑖!

    For each value of i (from 1 to 7), we compute the factorial of i and then add the term 1/𝑖! to the sum.

j: This variable is used in the inner loop to calculate the factorial of i.
    For each i, j runs from 1 to i and multiplies all integers from 1 to i to compute i!. For example:
        When i = 3, j will loop through 1, 2, and 3 to compute 3! = 1 * 2 * 3 = 6.

Once the factorial of i is calculated using j, you add the term 1/𝑖! to the total sum, and then the process repeats for the next value of i.

So, i goes through the numbers 1 to 7, and for each i, j computes the factorial i!.
*/