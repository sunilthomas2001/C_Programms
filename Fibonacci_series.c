/*
Write a C program to generate the Fibonacci series up to a given number of terms.
Description: The program should prompt the user to enter the number of terms (n). It should then generate the Fibonacci sequence, where each number is the sum of the two preceding ones, starting from 0 and 1. The program must display the sequence up to the specified number of terms. Pre-requisites: Loops, Variables, Basic Arithmetic Operations
*/
#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;
    int next;
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Checking value is Postive 
    if(n <= 0)
    {
        printf("Please enter a positive number");
    }

    // If only 1 term
    else if(n == 1)
    {
        printf("Fibonacci Series: %d", first);
    }

    // If 2 or more terms
    else
    {
        printf("Fibonacci Series: %d %d", first, second);

        //for other Numbers
        for(i = 2; i < n; i++)
        {
            next = first + second;

            first = second;
            second = next;

            printf(" %d", next);
        }
    }

    return 0;
}