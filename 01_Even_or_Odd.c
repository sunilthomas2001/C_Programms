/*
1.Write a C program that takes an integer from the user and determines whether the number is even or odd.
Description: The program should prompt the user to enter a whole number. It must then check if the number is perfectly divisible by 2. 
If it is, the program should display that the number is even; otherwise, it should display that the number is odd. The program should handle 
both positive and negative integers. Pre-requisites: Conditional Statements, Operators.
*/

#include <stdio.h>
int main()
{
	int a;
	printf("Enter a Whole Number:");//Allow User to Input a value
	scanf("%d",&a);//Read Integer From User
	
	if((a % 2) == 0)//Checking the Remainder
	{
		printf("The Value is Even");
	}
	else
	{
        printf("The Value is Odd");
    }
	return 0;
	
}