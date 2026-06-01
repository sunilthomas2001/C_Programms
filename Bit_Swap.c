/*
Write a C program that takes two integers and swaps n bits starting from a given position in both numbers.
Description: The program should prompt the user to enter two integers, a starting bit position, and the number 
of bits (n) to be swapped. It must then exchange the n consecutive bits at the specified position between the two 
numbers — the bits from the first number go into the second, and vice versa — while all remaining bits in both numbers stay exactly as they were. 
Both final values should be displayed on the screen after the swap. Pre-requisites: Bitwise Operators, Loops, Assignment Operators.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int mask;
    int bits1, bits2;

    // Read the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Read the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Read the starting bit position
    printf("Enter the starting bit position: ");
    scanf("%d", &pos);

    // Read the number of bits to swap
    printf("Enter the number of bits (n): ");
    scanf("%d", &n);

    // Create a mask containing n number of 1's
    mask = (1 << n) - 1;

    // Extract n bits from both numbers at the given position
    bits1 = (num1 >> pos) & mask;
    bits2 = (num2 >> pos) & mask;

    // Clear those bits in both numbers
    num1 = num1 & ~(mask << pos);
    num2 = num2 & ~(mask << pos);

    // Insert the extracted bits into the opposite numbers
    num1 = num1 | (bits2 << pos);
    num2 = num2 | (bits1 << pos);

    // Display the final values
    printf("First number after swap  = %d\n", num1);
    printf("Second number after swap = %d\n", num2);

    return 0;
}