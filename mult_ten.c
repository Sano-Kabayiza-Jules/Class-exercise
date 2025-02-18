#include <stdio.h>

int main() {
    // Declare a variable to store the input number
    float number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%f", &number);

    // Multiply the number by 10
    float result = number * 10;

    // Display the result
    printf("The result of multiplying %.2f by 10 is: %.2f\n", number, result);

    return 0;
}
