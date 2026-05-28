/*
.Write a C program that uses a function to count the frequency of each digit (0–9) in a given integer.
Description: The program should prompt the user to enter an integer. A separate function must be 
written that takes the number, extracts each digit using a loop, and updates a frequency array accordingly.
The function should not return a single value but instead update the array directly.
The main function should then print how many times each digit appears in the number. Pre-requisites: Functions, Arrays, Loops, Pass by Reference (Pointers).
*/

#include <stdio.h>

// Function for counting digits
void digitCount(int num, int count[])
{
    int digit;

    // If number is 0
    if(num == 0)
    {
        count[0] = 1;
    }

    // Loop for extracting digits
    while(num > 0)
    {
        digit = num % 10; // Get last digit

        count[digit] = count[digit] + 1; // Increase count

        num = num / 10; // Remove last digit
    }
}

int main()
{
    int num;
    int i;

    // Array for storing count of digits 0 to 9
    int count[10] = {0};

    // User Input
    printf("Enter an Integer: ");
    scanf("%d", &num);

    // Negative number convert to positive
    if(num < 0)
    {
        num = -num;
    }

    // Function Call
    digitCount(num, count);

    // Print Result
    printf("\nDigit Frequency:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Digit %d = %d\n", i, count[i]);
    }

    return 0;
}