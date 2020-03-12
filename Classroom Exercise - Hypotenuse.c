#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro 

///////////////////////////////////////////////////////////////////////////////////
///////// Classroom exercises with addition, FizzBuzz test, hypotenuse. //////////
/////////////////////////////////////////////////////////////////////////////////

//Hypotenuse

float distance(float x, float y) //Create a function with two floats that is
								//going to return a float value
{
	return sqrt((x*x)+(y*y)); //Returns the result of the operation
}

int main() 
{
float n1 = 5, n2 = 10; //Define the variables of type float

printf("The distace is %.2f\n", distance(n1,n2)); //Use the function taking the values
												 //of n1 and n2

}



