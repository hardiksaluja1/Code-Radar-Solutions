#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    // Printing the first Fibonacci number
    if (n >= 1) {
        printf("%d ", first);
    }

    // Printing the second Fibonacci number
    if (n >= 2) {
        printf("%d ", second);
    }

    // Generate the Fibonacci sequence from the 3rd term onward
    for (int i = 3; i <= n; i++) {  // Declare i here
        next = first + second;
        printf("%d ", next);

        // Update the first and second values for the next iteration
        first = second;
        second = next;
    }
}

int main() {
    int n;

    // Ask the user for the number of Fibonacci terms
    scanf("%d", &n);

    // Calling the Fibonacci function to print the sequence
    printf("%d ", n);
    fibonacci(n);

    return 0;
}




