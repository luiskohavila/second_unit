#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

///////////////////////////////////////////////////////////////////////////////////
////////// Add and Hip with the modification of argc and argv (casting) //////////
/////////////////////////////////////////////////////////////////////////////////

//Function Add with Arguments

int add_two_int(int x,int y) //Function add of two arguments called x and y
{
return x+y; // The operation (addition)
			// Put "return" because the function is going to return the value of the operation
}

int main (int argc, char** argv) // We are calling the value argc
								// char ** means that is going to accept a limited
								// number of arguments
{
int i; // integer number i
int  num1=atoi(argv[1]); //Value of the first number 
						//"Argument to Integer" (atoi) converts arguments in c to an integer number
int  num2=atoi(argv[2]); //Value of the second number

printf("The sum is %d\n",add_two_int(num1,num2)); // Here is when we insert the function
												 // and print the result
return 0; // We can use "return 0" instead of "void" at the beginning
}

