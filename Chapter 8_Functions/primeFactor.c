#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findPrimeFactors(int n) {
    // Handle factor 2 separately to avoid even checks in the loop
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // Check odd factors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        // Divide n by i as long as it's divisible
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2, print it
    if (n > 2)
        printf("%d", n);
}

int main() {
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    findPrimeFactors(number);
    printf("\n\n");

    return EXIT_SUCCESS;
}
