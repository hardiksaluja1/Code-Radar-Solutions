#include <stdio.h>

int main() {
    int i, j, n;

    // Ask user for the number of levels in the pyramid
    printf("Enter the number of levels for the pyramid: ");
    scanf("%d", &n);

    // Outer loop to handle the number of levels (rows)
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
