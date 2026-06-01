/*Write a C program that rearranges an array such that all negative numbers appear before all positive numbers while preserving the relative order of both groups.
Description: The program should prompt the user to enter the size of the array and its elements (a mix of positive and negative integers). It must then rearrange the 
elements so that all negative numbers come first, followed by all positive numbers, without changing the order in which the negatives appear among themselves or the positives among themselves. 
Zero can be treated as positive. The rearranged array should be displayed on the screen. Pre-requisites: Arrays, Loops, Temporary Storage, Order Preservation Logic.
*/

#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int size;
    int i, j = 0;

    // Accept the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Accept array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store all negative numbers in the result array
    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    // Store all positive numbers and zero in the result array
    for (i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    // Display the rearranged array
    printf("Array after rearranging elements:\n");

    // Print each element of the rearranged array
    for (i = 0; i < size; i++)
    {
        printf("%d ", result[i]);
    }

    
    return 0;
}