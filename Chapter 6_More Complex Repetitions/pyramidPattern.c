#include <stdio.h>

int main() {
    int i, j, k = 1, rows = 4;

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Print spaces for the pyramid shape
        for (j = i; j < rows; j++) {
            printf("  ");  // Adjusted to two spaces for centering
        }

        // Print numbers in the pyramid with increased space
        for (j = 1; j <= i; j++) {
            printf("%d", k);  // Print the number
            
            // Print extra spaces after the number but not after the last number of each row
            if (j < i) {
                printf("    ");  // Four spaces between numbers to increase spacing
            }
            k++;  // Increment the number to be printed
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
