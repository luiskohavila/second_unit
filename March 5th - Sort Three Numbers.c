#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

//Sort three numbers

void SortThreeNumbers(int* x, int* y, int* z) { //Create a function with three arguments
    int temp, i; //Declare the variables
    temp = *x; //Operation
    for (i = 0; i < 3; i++) { //For cycle until 3 values
        if (*x > *y) { //If x is bigger than y
            *x = *y; //x takes the value of y
            *y = temp; //And y takes the value of a temporal variable
        }
        if (*y > *z) { //If x wasn't bigger y we check if y bigger than z
            temp = *y; // The temporal variable takes the value of y
            *y = *z; // y takes the value of z
            *z = temp; //and z takes the value of a temporal variable
        }
    }
}

int main(int argc, char ** argv) { //Argument Count & Argument Vector
								  // We are calling the value argc
							     // char ** means that is going to accept a limited
							    // number of arguments
	int x = atoi(argv[1]); //Value of the first number 
						  //"Argument to Integer" (atoi) converts arguments in c to an integer number
	int y = atoi(argv[2]); //Value of the second number 
	int z = atoi(argv[3]); //Value of the third number 
	SortThreeNumbers(&x,&y,&z); //Calling the function
	printf("The sort numbers are %d %d %d\n",x,y,z); //Prints the sort values
	return 0; //Use of return 0, to check that all the program runs well
}
