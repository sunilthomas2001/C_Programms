/*
Write a C program that rotates the elements of an array by n positions in a specified direction.
Description: The program should prompt the user to enter the array elements, the number of positions (n) to rotate, 
and the direction (left or right). It must then shift the elements accordingly — elements that fall off one end should 
reappear at the opposite end. The rotation must work for any value of n, including values larger than the array size. 
The final rotated array should be displayed on the screen. Pre-requisites: Arrays, Loops, Modulus Operator.
*/


#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int size, n;
    int i;
    char direction;

    // Accept the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Accept array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Accept the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    // Accept the rotation direction (L for left, R for right)
    printf("Enter the direction (L/R): ");
    scanf(" %c", &direction);

    // Reduce n if it is larger than the array size
    n = n % size;

    // Perform left rotation
    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < size; i++)
        {
            temp[i] = arr[(i + n) % size];
        }
    }
    // Perform right rotation
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < size; i++)
        {
            temp[(i + n) % size] = arr[i];
        }
    }
    else
    {
        printf("Invalid direction entered.");
        return 0;
    }

    // Display the rotated array
    printf("Array after rotation:\n");

    // Print each element of the rotated array
    for (i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
