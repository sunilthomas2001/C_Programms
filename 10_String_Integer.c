/*
Write a C program that takes a string of digits from the user and converts it into its equivalent integer value.
Description:The program should prompt the user to enter a number as a string (for example, 1234). 
It must then process this string character by character and transform it into an actual integer variable that can be 
used for mathematical operations. The program should be able to handle positive numbers and display the final integer result on the screen. Pre-requisites: Loops, Strings, Operators.
*/

#include <stdio.h>

int main()
{
    char number[100];
    int i;
    int result = 0;

    // User Input
    printf("Enter a Number: ");
    scanf("%s", number);

    // Loop for converting string to integer
    for(i = 0; number[i] != '\0'; i++)
    {
        result = result * 10 + (number[i] - '0');
    }

    // Print Result
    printf("Integer Value = %d", result);

    return 0;
}