/*Write a C program that merges two sorted arrays into a single sorted array without using any sorting function.
Description: The program should prompt the user to enter the sizes and elements of two arrays, each already sorted in ascending order. 
It must then merge them into a third array by comparing elements from both arrays one by one and placing the smaller element first,
continuing until all elements are placed. The final merged sorted array should be displayed on the screen. Pre-requisites: Arrays, Loops, Multiple Array Handling.
*/


#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int size1, size2;
    int i, j, k;

    // Accept the size of the first array from the user
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    // Accept elements of the first sorted array
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Accept the size of the second array from the user
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    // Accept elements of the second sorted array
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Initialize array indexes
    i = 0;
    j = 0;
    k = 0;

    // Compare elements from both arrays and place the smaller element first
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from the first array, if any
    while (i < size1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from the second array, if any
    while (j < size2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Display the merged sorted array
    printf("Merged Sorted Array:\n");

    // Print each element of the merged array
    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
