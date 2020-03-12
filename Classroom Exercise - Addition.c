#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

///////////////////////////////////////////////////////////////////////////////////
///////// Classroom exercises with addition, FizzBuzz test, hypotenuse. //////////
/////////////////////////////////////////////////////////////////////////////////

//Addition

int add_two_int(int x,int y) //Function add of two arguments called x and y
{
return x+y; // The operation (addition)
			// Put "return" because the function is going to return the value of the operation
}

int main() 
{
	int n1 = 4, n2 = 6; //Declaration of the variables
	
	printf("The sum of the number is: %d",add_two_int(n1,n2)); //Prints the result using the 
															   //function (10)
	
}
