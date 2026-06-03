/*
Define a structure Complex with real and imaginary parts. Write a C program to add two complex numbers and display the result.
Description: The program should define a structure to represent a complex number with two members: real part and imaginary part. 
It must then create functions to perform addition of two complex numbers and to display a complex number in a readable format (e.g., a + bi). 
The program should take input for two complex numbers, compute their sum using the defined function, and print the result. Pre-requisites: Structures, Functions, Basic Arithmetic Operations, Input/Output.
*/

#include <stdio.h>

// Define a structure to represent a complex number
struct Complex
{
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    // Add the real parts
    result.real = c1.real + c2.real;

    // Add the imaginary parts
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

// Function to display a complex number
void displayComplex(struct Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

int main()
{
    struct Complex c1, c2, sum;

    // Accept the first complex number from the user
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &c1.real);

    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &c1.imaginary);

    // Accept the second complex number from the user
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &c2.real);

    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &c2.imaginary);

    // Calculate the sum of the two complex numbers
    sum = addComplex(c1, c2);

    // Display the resulting complex number
    printf("Sum of the complex numbers: ");
    displayComplex(sum);

    return 0;
}