/* Write a C program that asks the user to enter a number and determines whether that number is prime or not.
Description: A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers. In simpler terms, it is a number that is only divisible by 1 and itself. Your program should take an integer as input and check if it has any divisors other than 1 and the number itself. If the user enters a number like 2, 3, or 5, the program should identify it as prime. However, if the user enters a number less than 2, or a number like 4 or 6 that can be divided by other values, the program should state it is not prime. You should use a simple loop to test for these divisors and a conditional statement to print the final result. Pre-requisites: Loops, Conditional Statements, Operators
*/



#include <stdio.h>
int main()
{
    int a, i;
    int isPrime = 1;

    printf("Enter a Number: ");  //Allow user to Input a number
    scanf("%d", &a);  //Read user input

//Value 1 or below 1 is not a Prime Number
    if(a<=1)
    {
        printf("The value is not a Prime Number");
    }
    else
    {
 //Conditional loop for checking the Remainder
      for(i=2;i<a;i++)
        {
            if (a%i==0)
            {
              isPrime=0;
              break;
            }
        }
 //Final check to determine Prime or Not Prime 
     if(isPrime == 1)      
        {
        printf("The value is a Prime Number");
        }
     else
        {
        printf("The value is not a Prime Number");
        }
    }
    return 0;
}