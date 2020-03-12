#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

/////////////////////////////////////////////////////////////////////////////////////
//////////////////Pseudocode examination to code in C, 4 exercises./////////////////
///////////////////////////////////////////////////////////////////////////////////

//Leap year

int main(void){ //Return a type of number int and you cannot pass
			   // an argument to the main
	int year,counter=0; //Declare the variable year and counter
	for (year=1500;year<2100;year++) //Cyclo for in a range of 1500 to 2100
	{
		if((year%400==0)||(year%4==0 && year%100!=0)){ //The conditions
		
		
		printf("%d\n",year); //Prints the Leap years
		counter++; //Add 1 to the counter for each Leap Year
		}
	}
	printf("The total number of leap years is: %d\n",counter); //Prints a t the end the total
															   //of leap years
}
