/*
Write a C program that uses functions to evaluate a simple arithmetic expression given two numbers and an operator.
Description: The program should prompt the user to enter two floating-point numbers and an arithmetic operator (+, -, *, /).
A separate function must be written for each operation (add, subtract, multiply, divide). A selector function should take the operator as 
a parameter and call the appropriate function, returning the result to main. Division by zero must be handled gracefully inside the divide function. Pre-requisites: Functions, Switch/Conditionals, Float Arithmetic, Error Handling
*/

#include <stdio.h>

// Addition Function
float add(float a, float b)
{
    return a + b;
}

// Subtraction Function
float subtract(float a, float b)
{
    return a - b;
}

// Multiplication Function
float multiply(float a, float b)
{
    return a * b;
}

// Division Function
float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Cannot Divide by Zero");
        return 0;
    }

    return a / b;
}

// Function to select operation
float choose(float a, float b, char operation)
{
    if(operation == '+')
    {
        return add(a, b);
    }

    else if(operation == '-')
    {
        return subtract(a, b);
    }

    else if(operation == '*')
    {
        return multiply(a, b);
    }

    else if(operation == '/')
    {
        return divide(a, b);
    }

    else
    {
        printf("Invalid Operator");
        return 0;
    }
}

int main()
{
    float num1, num2;
    float result;
    char operation;

    // User Input
    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Operator (+,-,*,/): ");
    scanf(" %c", &operation);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    // Function Call
    result = choose(num1, num2, operation);

    // Print Result
    if(operation != '/' || num2 != 0)
    {
        printf("Answer = %.2f", result);
    }

    return 0;
}