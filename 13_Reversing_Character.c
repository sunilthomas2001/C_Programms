/*
Write a C program that takes a string from the user and reverses its characters using an iterative approach.
Description: The program should prompt the user to enter a sequence of characters. It must then swap or move the 
characters within the string using a loop until the entire string is reversed. The final resulting 
string should be displayed on the screen. Pre-requisites: Loops, Strings. Operators.
*/

#include <stdio.h>

int main()
{
    char str[100], temp;
    int length = 0, i;

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Reverse the string by swapping characters
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Display the reversed string
    printf("Reversed String: %s\n", str);

    return 0;
}