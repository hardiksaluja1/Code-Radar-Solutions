#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    int i = 1; // Start with the first term

    // Print the first Fibonacci number if n >= 1
    while (i <= n) {
        if (i == 1) {
            printf("%d ", first); // Print the first term
        } else if (i == 2) {
            printf("%d ", second); // Print the second term
        } else {
            next = first + second;
            printf("%d ", next); // Print the next Fibonacci number

            // Update first and second for the next iteration
            first = second;
            second = next;
        }

        i++; // Increment the counter
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Calling the Fibonacci function to print the sequence
    printf("%d ", n);
    fibonacci(n);

    return 0;
}




