#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

/////////////////////////////////////////////////////////////////////////////////////
//////////////////Pseudocode examination to code in C, 4 exercises./////////////////
///////////////////////////////////////////////////////////////////////////////////

//Prime numbers

int main() //Insert int main
{
int number,divisor,divisorcount,counter=0; //Declare all the variables
for(number=1;number<=200;number++) //For cycle to 200 numbers
{
	divisorcount = 0; //Give the value of 0 to the divisorcount to star counting
	for (divisor=1;divisor<number;divisor++) //For cycle that increase if the number is
											//bigger than the divisor
		{
		if ((number%divisor)==0) //First Clause wich see if the number can be divided by the divisor
		{
			divisorcount++; //If its true add 1 to the divisor count
		}
		}
		if (divisorcount == 1) //If the divisor count is equal to 1
		{
		printf ("%d\n",number); //Means that is a prime number
		counter = counter + 1; //So we add the first value to our counter of prime numbers
		}
} 
	printf("The count is: %d\n",counter); //At the end of the program prints the total number
										 // of prime numbers
	return 0; // We can use "return 0" instead of "void" at the beginning
}
