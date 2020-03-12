#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

//Perfect numbers with function and arguments

int perfect_number(int x)
{	
int y; //Declare variable y
int total=0,divisor,aux; //Declare the variables

    for (divisor = 1; divisor <= x; divisor++){ //For cycle of divisors until the number
    	
    if (x%divisor==0){ //Condition if number is divisible by the divisor
    	
                total = total + divisor; //If it is true sum total and divisor
                
                aux = (total)/2; //Then divide the result between 2
            }
        }
        if (aux==x){ //If the auxiliar is equal to the number
        	
            y = 1; //If it's accomplish the value changes to 1 (True)
            
        }else {y = 0;} //If it isn't accomplish the value changes to 0 (False)
     return y; //Return the value of y   
}

int main(int argc,char** argv)   //Argument Count & Argument Vector
								// We are calling the value argc
							   // char ** means that is going to accept a limited
							  // number of arguments
{
	int numbertyped=atoi(argv[1]); //Value of the first number 
						          //"Argument to Integer" (atoi) converts arguments in c to an integer number
	
	printf("The number %d, is: %d\n",numbertyped,perfect_number(numbertyped));	//At the end prints the number and use the 
																               //function to know if is True(1) = Perfect
																              //or False(0) = Isn't Perfect 
}




