/*Finding range of a set of numbers*/
#include <stdio.h>

int main()
{
    int n, num, smallest, largest, count = 1;

    // Ask the user how many numbers they want to input
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    // Ensure there's at least one number to process
    if (n < 1) {
        printf("\nYou must enter at least one number.\n");
        return 1;  // Exit the program if n is less than 1
    }

    // Ask the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &num);

    // Initialize smallest and largest with the first number
    smallest = largest = num;

    // Process the remaining n-1 numbers using a while loop
    while (count < n)
    {
        count++;  // Increment the counter for each number
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        // Check if the current number is smaller than the smallest
        if (num < smallest)
            smallest = num;

        // Check if the current number is larger than the largest
        if (num > largest)
            largest = num;
    }

    // Calculate the range
    int range = largest - smallest;

    // Output the result
    printf("\nThe smallest number is: %d\n", smallest);
    printf("The largest number is: %d\n", largest);
    printf("The range of the numbers is: %d\n", range);

    return 0;
}