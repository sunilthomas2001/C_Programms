/*
Write a C program that takes an integer from the user and extracts (n) bits starting from a specific bit position.
Description: The program should prompt the user to enter a number, a starting position, and the number of bits to be retrieved.
It must then isolate that specific sequence of bits from the original value and display the resulting number on the screen. 
The other bits in the number should not affect the final output. Pre-requisites: Bitwise Operators.
*/

#include <stdio.h>

int main()
{
    int num, pos, n;
    int result, mask;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ask for the starting position
    printf("Enter the starting position: ");
    scanf("%d", &pos);

    // Ask for the number of bits to extract
    printf("Enter the number of bits: ");
    scanf("%d", &n);

    // Move the required bits to the rightmost side
    result = num >> pos;

    // Create a mask with n bits set to 1
    mask = (1 << n) - 1;

    // Extract only the required bits
    result = result & mask;

    // Display the result
    printf("Extracted value: %d\n", result);

    return 0;
}
