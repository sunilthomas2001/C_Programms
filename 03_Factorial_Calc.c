/*
Write a C program that takes a positive integer from the user and calculates its factorial.
Description: The program should prompt the user to enter a single whole number. It must then calculate the factorial of that number, which is the product of all positive integers from 1 up to the number entered. The final result should be displayed clearly on the screen. The program should also account for the fact that the factorial of 0 is Pre-requisites: Operators, Data Types, Loops.
*/

#include <stdio.h>

int main()
{

    int b,i;
    int factorial =1;

    printf("Please enter a non-negative integer:"); //Allow user to Input a value
    scanf("%d",&b); // Read the User Value

//Check the User Value is Positive Integer
if(b<0)
{
    printf("Please enter a non-negative integer");
}
else
{

 // Factorial Calculation 

for(i=1;i<=b;i++)
{
     factorial= factorial * i;   
}

printf("The Factorial of %d! is %d ", b, factorial); //Print Result
}
return 0;
}