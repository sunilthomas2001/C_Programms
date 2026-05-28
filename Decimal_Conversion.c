/*
Write a C program that uses functions to convert a decimal number to any base between 2 and 16.
Description: The program should prompt the user to enter a decimal number and a target base. 
A separate function must be written that performs the repeated division method, stores each remainder, and builds the result in the correct order.
For bases above 9, remainders 10–15 should be represented as letters A–F. The converted value should be displayed from the main function. Pre-requisites: Functions, Loops, Arrays, Character Handling.
*/


#include <stdio.h>

// Function for conversion
void convert(int num, int base)
{
    int arr[100];
    int i = 0;
    int j;

    // If number is 0
    if(num == 0)
    {
        printf("0");
        return;
    }

    // Find remainder and store
    while(num > 0)
    {
        arr[i] = num % base;
        num = num / base;
        i++;
    }

    // Print in reverse order
    for(j = i - 1; j >= 0; j--)
    {
        // For Base 16
        if(arr[j] >= 10)
        {
            printf("%c", arr[j] + 55);
        }
        else
        {
            printf("%d", arr[j]);
        }
    }
}

int main()
{
    int num;
    int base;

    // User Input
    printf("Enter Decimal Number: ");
    scanf("%d", &num);

    printf("Enter Base (2 to 16): ");
    scanf("%d", &base);

    // Check valid base
    if(base < 2 || base > 16)
    {
        printf("Please Enter Base Between 2 and 16");
    }
    else
    {
        printf("Converted Number = ");

        // Function Call
        convert(num, base);
    }

    return 0;
}