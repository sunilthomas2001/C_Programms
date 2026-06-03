/*
Write a C program that takes a number and toggles a specific number of bits (n) starting from a given position.
Description: The program should prompt the user to enter an integer, a starting bit position, and the number 
of bits to be modified. It must then change the state of those (n) consecutive bits—switching 0s to 1s and 1s to 0s—while 
keeping all other bits in the number exactly as they were. The final value of the number after the toggle operation should be displayed on the screen. Pre-requisites: Bitwise operators, Loops, Assignment operators.
*/


#include <stdio.h>

int main()
{
    int num, pos, n, i;

    // Ask the user to enter the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ask for the starting position
    printf("Enter the starting bit position: ");
    scanf("%d", &pos);

    // Ask for the number of bits to toggle
    printf("Enter the number of bits to toggle: ");
    scanf("%d", &n);

    // Toggle n consecutive bits
    for (i = 0; i < n; i++)
    {
        num = num ^ (1 << (pos + i));
    }

    // Display the result
    printf("Number after toggling bits: %d\n", num);

    return 0;
}