#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

///////////////////////////////////////////////////////////////////////////////////
///////// Classroom exercises with addition, FizzBuzz test, hypotenuse. //////////
/////////////////////////////////////////////////////////////////////////////////

//Fizzbuzz test
int main(void) //Return a type of number int and you cannot pass
			   // an argument to the main
{
int i; //variable of type integer
	for (i=0;i<=100;i++) //For cycle until 100
	{
		if(i%3==0 && i%5==0){ //The use of i%number==0 means that the number is 
							  //divisible by an specifil number also we use 
							  //&& to put together the two clauses and both
							  //accomplish
				printf("Fizzbuzz\n"); // prints the word Fizzbuzz
		}else if(i%3==0){ //If i is divisible by 3
			printf("Fizz\n"); //prints Fizz
		}else if(i%5==0){ //If i is divisible by 5
			printf("Buzz\n"); //Prints Buzz
		}else printf("%d\n",i); //If none of the conditions are accomplish
								//prints the number
	}
}

