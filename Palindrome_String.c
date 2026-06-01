/*
Write a C program that takes a string from the user and checks whether it is a palindrome.
Description: The program should prompt the user to enter a string. It must determine if the 
string reads the same forward and backward. The program should then display a message to the 
user stating whether the input is a palindrome or not. Pre-requisites: Loops, Control Statements, Strings and Operators
*/



#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare characters from the beginning and end
    for (i = 0; i < length / 2; i++)
    {
        // If characters do not match,
        // the string is not a palindrome
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    // Display the result
    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}