/*
Write a C program that takes an integer from the user and converts it into a string of characters.
Description:The program should prompt the user to enter a whole number. It must then process this 
integer and store each of its digits as characters within a character array (string). 
The resulting string should represent the number exactly as it was entered, including a negative sign if the number is less than zero.
 Finally, the program should display the resulting string on the screen. Pre-requisites: Strings, Loops, Operators
*/
#include <stdio.h>

int main()
{
    int n, temp;
    int i = 0, a;
    char str[20], c;

    // Ask the user to enter an Whole Number
    printf("Enter an Whole Number: ");
    scanf("%d", &n);

    // Copy the number to another variable
    temp = n;

    // Special case when the number is 0
    if (n == 0)
    {
        str[i] = '0';
        i++;
    }

    // If the number is negative, make it positive
    // so that we can extract its digits easily
    if (temp < 0)
    {
        temp = temp * -1;
    }

    // Extract each digit and store it as a character
    // Digits are stored in reverse order
    while (temp > 0)
    {
        str[i] = (temp % 10) + '0';
        temp = temp / 10;
        i++;
    }

    // Add the negative sign if the original number was negative
    if (n < 0)
    {
        str[i] = '-';
        i++;
    }

    // Reverse the string to get the correct order
    for (a = 0; a < i / 2; a++)
    {
        c = str[a];
        str[a] = str[i - a - 1];
        str[i - a - 1] = c;
    }

    // Add the null character at the end of the string
    str[i] = '\0';

    // Display the string
    printf("Resulting String: %s\n", str);

    return 0;
}