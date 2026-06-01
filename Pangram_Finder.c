/*
Write a C program that takes a string input from the user and determines whether it is a pangram or not.
Description: The program should prompt the user to enter a sentence or a string of characters. 
It must then verify if every letter of the alphabet from A to Z appears at least once within the provided text,
regardless of whether the letters are uppercase or lowercase. The final output should state if the string is a pangram. Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators
*/


#include <stdio.h>

int main()
{
    char str[200];
    int alphabet[26] = {0};
    int i = 0, count = 0;

    // Ask the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Check each character in the string
    while (str[i] != '\0')
    {
        // Convert uppercase letters to lowercase using ASCII
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            alphabet[str[i] - 'a'] = 1;
        }

        i++;
    }

    // Count how many letters of the alphabet are present
    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 1)
        {
            count++;
        }
    }

    // Display the result
    if (count == 26)
    {
        printf("The string is a pangram.\n");
    }
    else
    {
        printf("The string is not a pangram.\n");
    }

    return 0;
}