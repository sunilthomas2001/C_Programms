/*
Write a C program to remove duplicate elements from a given array.
Description: The program should prompt the user to enter the size of 
the array and its elements. It must then identify and remove any duplicate 
values, ensuring that each element appears only once in the resulting array. 
The program should finally display the updated array containing only unique elements. Pre-requisites: Arrays, Loops, Conditional Statements
*/


#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int i, j, k;

    // Accept the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Accept array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Compare each element with the remaining elements
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            // Check whether a duplicate element is found
            if (arr[i] == arr[j])
            {
                // Shift all subsequent elements one position to the left
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                // Reduce the array size after removing the duplicate
                size--;

                // Recheck the current position after shifting
                j--;
            }
        }
    }

    // Display the array containing only unique elements
    printf("Array after removing duplicates:\n");

    // Print each element of the updated array
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



