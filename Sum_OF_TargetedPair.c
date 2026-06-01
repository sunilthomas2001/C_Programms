/*
Write a C program that finds all pairs of elements in an array whose sum equals a given target value.
Description: The program should prompt the user to enter the size of the array, its elements, and a target sum. 
It must then examine all possible pairs of elements in the array and identify every pair whose sum matches the target. 
Each valid pair should be printed on the screen. If no such pair exists, an appropriate message should be displayed. 
The same element should not be paired with itself. Pre-requisites: Arrays, Nested Loops, Conditional Statements.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int target;
    int i, j;
    int found = 0;

    // Accept the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Accept array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Accept the target sum from the user
    printf("Enter the target sum: ");
    scanf("%d", &target);

    // Display a heading for the matching pairs
    printf("Pairs with sum equal to %d are:\n", target);

    // Compare every element with the remaining elements
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            // Check whether the sum of the pair equals the target value
            if (arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // Check whether any valid pair was found
    if (found == 0)
    {
        printf("No pairs found with the given target sum.\n");
    }

    return 0;
}