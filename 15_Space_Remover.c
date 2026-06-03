/*
Write a C program that takes a string from the user and replaces every sequence of multiple consecutive spaces with a single space.
Description: The program should prompt the user to enter a sentence that may contain several spaces between words. It must then process 
the string to ensure that any instance where two or more blank spaces appear together is reduced to just one blank space. 
The final cleaned string should be displayed on the screen. Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators
*/


#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, j = 0;

    // Ask the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Process the string
    while (str[i] != '\0')
    {
        // Copy the current character
        result[j] = str[i];

        // If the current character is a space
        if (str[i] == ' ')
        {
            // Skip all extra consecutive spaces
            while (str[i + 1] == ' ')
            {
                i++;
            }
        }

        i++;
        j++;
    }

    // Add the null character at the end
    result[j] = '\0';

    // Display the cleaned string
    printf("Cleaned String: %s", result);

    return 0;
}
