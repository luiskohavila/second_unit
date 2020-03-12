#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

//Prime numbers with Function and Arguments

int primenumber(int x) //Create a function called "primenumber" that has 1 arg inside (x)
{
int	y = 0; //Declare the variable y
int divisor,divisorcount,counter; //Declare all the variables
	for (divisor=1;divisor<x;divisor++) //For cycle that increase if the number is
										//bigger than the divisor
		{
		if ((x%divisor)==0) //First Clause wich see if the number can be divided by the divisor
		{
			divisorcount++; //If its true add 1 to the divisor count
		}
		}
		if (divisorcount == 1) //If the divisor count is equal to 1
		{
		y = 1; //If it's accomplish the value changes to 1 (True)
		} else y = 0; //If it isn't accomplish the value changes to 0 (False)

return y;
}
int main(int argc, char** argv)  //Argument Count & Argument Vector
								// We are calling the value argc
							   // char ** means that is going to accept a limited
							  // number of arguments
{
int numbertyped=atoi(argv[1]); //Value of the first number 
						      //"Argument to Integer" (atoi) converts arguments in c to an integer number

printf("The number is prime: ",primenumber(numbertyped)); //At the end prints the number and use the 
														 //function to know if is True(1) = Prime
													    //or False(0) = Isn't prime 
}
