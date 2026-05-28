/*
Write a C program that uses a recursive function to find the GCD of two numbers using the Euclidean algorithm.
Description: The program should prompt the user to enter two positive integers. A recursive function must be 
written that repeatedly applies the Euclidean method replacing the larger number with the remainder of dividing the two until the remainder is zero.
The GCD should be returned to the main function and displayed on the screen. Pre-requisites: Functions, Recursion, Modulus Operator.
*/

#include <stdio.h>

// Function to find GCD using recursion
int gcd(int a, int b)
{
    // Stop condition
    if(b == 0)
    {
        return a;
    }

    // Recursive call
    return gcd(b, a % b);
}

int main()
{
    int num1, num2;
    int answer;

    // User Input
    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    // Check positive numbers
    if(num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive numbers");
    }
    else
    {
        // Function call
        answer = gcd(num1, num2);

        // Print Result
        printf("The GCD is %d", answer);
    }

    return 0;
}