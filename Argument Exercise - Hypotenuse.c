#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

///////////////////////////////////////////////////////////////////////////////////
////////// Add and Hip with the modification of argc and argv (casting) //////////
/////////////////////////////////////////////////////////////////////////////////

//Hypotenuse with Arguments

float distance(float x,float y) //Function of type float with two arguments x and y
{
return sqrt((y*y)+(x*x)); //The operation (The square of the 
					    //Sum of two squared numbers) that calculates the hypotenuse
}
int main(int argc, char** argv){  //Argument Count & Argument Vector
								 // We are calling the value argc
							    // char ** means that is going to accept a limited
							   // number of arguments
int num1=atof(argv[1]); //Value of the first number 
						 //"Argument to Integer" (atoi) converts arguments in c to an integer number
int num2=atof(argv[2]); //Value of the second number
printf("The distance is %f\n",distance(num1, num2)); //Prints the result of the function taking the values
													 //of the previously typed arguments
return 0; // We can use "return 0" instead of "void" at the beginning
}
