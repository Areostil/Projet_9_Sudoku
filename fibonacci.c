#include <stdio.h>

// Define a function that calculates the nth number in the Fibonacci sequence, up to a given maximum index
int fibonacci(int max_fib) {
    // Initialize the first three numbers in the sequence
    int fib_1 = 0;
    int fib_2 = 1;
    int fib_n = 1;
    int i = 2;

    // Loop through the sequence, updating each number in turn
    while (i <= max_fib) {
        fib_n = fib_1 + fib_2; // Calculate the next number in the sequence
        fib_1 = fib_2; // Shift the variables to prepare for the next iteration
        fib_2 = fib_n;
        i++; // Increment the counter
    }

    return fib_n; // Return the nth number in the sequence
}

// Define the main function
int main(void) {
    int fib; // Declare a variable to store the result of the Fibonacci function
    fib = fibonacci(6); // Call the Fibonacci function with a maximum index of 6 and store the result
    printf("%i\n", fib); // Print the result to the console
    return 0;
}
