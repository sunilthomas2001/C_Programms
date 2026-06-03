/*
Write a C program that uses a function to check whether a given number is a Perfect Number.
Description: The program should prompt the user to enter a positive integer. A separate function
must be written that computes the sum of all proper divisors of the number (excluding the number itself) 
and returns whether the sum equals the original number. The main function should display whether the number 
is perfect or not. (Example: 6 = 1+2+3, 28 = 1+2+4+7+14) Pre-requisites: Functions, Loops, Return Values.
*/


#include <stdio.h>

//For checking perfect number
int checkPerfect(int a)
{
    int i;
    int sum = 0;

//To Find divisor and to add sum
    for(i = 1; i < a; i++)
    {
        if(a % i == 0)
        {
            sum = sum + i;
        }
    }

//Return Result if sum == User Input
    if(sum == a)
    {
        return 1;
    }
   else
    {
        return 0;
     }
}


int main()
{
    int number;
    int result;

    printf("Enter a Positive Number: ");
    scanf("%d", &number);
    
//To check valid number
    if(number <= 0)
    {
        printf("Please Enter a Positive Number");
    }
    else
    {
        result = checkPerfect(number);

// To print the result
        if(result == 1)
        {
            printf("The Number is Perfect");
        }
        else
        {
            printf("The Number is Not Perfect");
        }
    }

    return 0;
}