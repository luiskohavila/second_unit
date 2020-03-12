#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

//Leap year

int leap_year_function(int x) //Create a variable with one argument (x)
{
int y=0; //Declare the variables
if (x%400==0) //First condition
	{
	y=1; //If it's accomplish the value changes to 1 (True)
	} else 
	{
		if (x%4==0 && x%100!=0) //Second condition
			{
				y=1; //If it's accomplish the value changes to 1 (True)
			} else
			{
				(y=0); //If it isn't accomplish the value changes to 0 (False)
		    }	
	} 
return y; //Return the value of y
}

int main(int argc, char** argv)  //Argument Count & Argument Vector
								// We are calling the value argc
							   // char ** means that is going to accept a limited
							  // number of arguments
{
int number = atoi(argv[1]); //Value of the first number 
						   //"Argument to Integer" (atoi) converts arguments in c to an integer number

printf("The number is:%i %i\n",number, leap_year_function(number)); //At the end prints the number and use the 
																    //function to know if is True(1) = Leap
																    //or False(0) = Isn't Leap 

}
