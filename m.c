#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, result;

    // Ask for user input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform multiplication
    result = num1 * num2;

    // Display the result
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, result);

    return 0;
}

