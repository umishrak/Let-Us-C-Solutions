/*Generate Ramanujan Numbers*/
#include <stdio.h>

int main() {
    int a, b, c, d, n, limit = 10000;

    printf("Ramanujan Numbers up to %d:\n", limit);

    for (n = 1; n <= limit; n++) {
        int count = 0;  // To count how many ways n can be expressed as sum of two cubes

        for (a = 1; a * a * a < n; a++) {
            for (b = a; a * a * a + b * b * b <= n; b++) {
                if (a * a * a + b * b * b == n) {
                    count++;

                    // Print only if the number can be expressed in two different ways
                    if (count == 2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n, a, b, c, d);
                        break;
                    }
                    
                    c = a;  // Store current pair for later output
                    d = b;
                }
            }
        }
    }

    return 0;
}
