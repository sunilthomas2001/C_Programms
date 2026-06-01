/*
Write a C program that takes a number and replaces n of its bits, starting from a given position, with another set of n bits from a second number.
Description: The program should prompt the user to enter two integers, a starting bit position, and the number of bits n to be modified. It must then 
clear $n$ bits in the first number at the specified position and replace them with the corresponding $n$ bits from the second number. The final resulting 
value should be displayed on the screen while all other bits in the first number remain unchanged. Pre-requisites: Bitwise Operators.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int mask;
    int extracted_bits;
    int result;

    // Read the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Read the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Read the starting bit position
    printf("Enter the starting bit position: ");
    scanf("%d", &pos);

    // Read the number of bits to replace
    printf("Enter the number of bits (n): ");
    scanf("%d", &n);

    // Create a mask with n number of 1's
    // Example: if n = 3, mask = 00000111
    mask = (1 << n) - 1;

    // Extract the rightmost n bits from the second number
    extracted_bits = num2 & mask;

    // Clear n bits in the first number starting at position 'pos'
    num1 = num1 & ~(mask << pos);

    // Place the extracted bits into the cleared position
    result = num1 | (extracted_bits << pos);

    // Display the final result
    printf("Result after replacing bits: %d\n", result);

    return 0;
}