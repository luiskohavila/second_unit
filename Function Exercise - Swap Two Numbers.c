#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

////////////////////////////////////////////////////////////////////////////////////
///////Function exercises (Counter, and Asking for argument (SwapTwoNumbers)///////
///////////////////////////////////////////////////////////////////////////////////

//SwapTwoNumbers

void inc_count(int *count_ptr) //We create a function that is going to increase the
							   //size of a pointer
{
        (*count_ptr)++; //The operation where we are going to add 1 to the pointer
}

void swaptwonumbers(int *a, int *b) //Other function that is going to swapt two numbers (a and b)
{
	int temp = *a; //The use of an auxiliary variable called "temp" is essential to allow the
				   // interchange of the values 
	*a = *b; //Here we pass the value of the pointer a into the pointer two
	*b = temp; //We saved the value in temp
}
int main() //The function needs to return some integer at the end of the execution
{
        int count=0,n1=2,n2=3; //We declare some variables and give them values
	printf("First number: %d\nSecond number: %d\n", n1, n2); //We print the value of the first
															// number and second (2 , 3)
	swaptwonumbers(&n1,&n2); //Use the function the change their values
	printf("*SWAP*\nFirst number: %d\nSecond number: %d\n",n1,n2); //Print the new values (3 , 2)
        while (count < 10){ //Count until 10
        inc_count(&count); //The function of increase is called adding values for each time the 
        				   //cicly passes
        				   
        printf("%d\n",count); //Prints the resulting value
        }

        //print the location of the file
        return 0; // We can use "return 0" instead of "void" at the beginning
}

