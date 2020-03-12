#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

////////////////////////////////////////////////////////////////////////////////////
///////Function exercises (Counter, and Asking for argument (SwapTwoNumbers)///////
///////////////////////////////////////////////////////////////////////////////////

// Call/Call.c  (Counter)

void inc_count(int *count_ptr) //Function where we going to increment the variable count
{
	(*count_ptr)++; //The operation adding one to count
}

int main() //The function needs to return some integer at the end of the execution
{
	int count = 0; //Number of times through

	while (count < 10){ //While cycle until 10
	inc_count(&count); //Each time the cycle passes we use the function to increase
					   //the value of count

	printf("%d\n",count); //Finally prints 1 to 10
	}

	//print the location of the file
	return 0; // We can use "return 0" instead of "void" at the beginning
}

