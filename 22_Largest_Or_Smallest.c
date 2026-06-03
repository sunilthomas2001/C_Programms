/*
Write a C program that uses an array to find the second largest and second smallest element in a list of numbers.
Description: The program should prompt the user to enter the size of the array and its elements. It must then scan 
through the array and determine both the second largest and second smallest values without sorting the array. 
The program should handle duplicate values correctly — if all elements are the same, it should display an appropriate message.
 Both results should be displayed on the screen. Pre-requisites: Arrays, Loops, Conditional Statements.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int i;
    int largest, second_largest;
    int smallest, second_smallest;

    // Accept the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Accept array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest values
    largest = smallest = arr[0];

    // Find the largest and smallest elements
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Initialize second largest and second smallest
    second_largest = smallest;
    second_smallest = largest;

    // Find second largest and second smallest elements
    for (i = 0; i < size; i++)
    {
        if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }

        if (arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i];
        }
    }

    // Check whether second largest and second smallest exist
    if (largest == smallest)
    {
        printf("All elements in the array are the same.\n");
    }
    else
    {
        printf("Second Largest Element: %d\n", second_largest);
        printf("Second Smallest Element: %d\n", second_smallest);
    }

    return 0;
}
