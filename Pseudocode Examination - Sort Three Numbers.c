#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

/////////////////////////////////////////////////////////////////////////////////////
//////////////////Pseudocode examination to code in C, 4 exercises./////////////////
///////////////////////////////////////////////////////////////////////////////////

//Sort three numbers

int main(){

	int n1,n2,n3,high,middle,low; //Declare the variables
	printf("Type three numbers to sort: "); //Ask for the user to type 3 numbers to sort
	scanf("%d %d %d",&n1,&n2,&n3); //Save all the numbers with & in each variable
	
	if (n1 > n2){ //In this part we check if the number 1 is bigger than the number 2
		if (n2 > n3){ //If it is true we pass to the next checking that consis to check if 
					  //the number 2 is bigger than the number 3
			high = n1;  	//If it is true we save the values in the variables
			middle = n2;
			low = n3;
		} else if (n3 > n1){ //If it isn't true we pass to the next checking that consist to
							//check if number 3 is bigger than number 1
			middle = n1;   //If it is true we save the values in the variables
			low = n2;
			high = n3;
		}else {			//If it isn't true we save the values in the next variables because we
						//don't have more options
			high = n1;
			low = n2;
			middle = n3;
		}
	} 
	else if (n2 > n3){ //If the first part wasn't true we check if the number 2 is bigger than number 3
		if(n3 > n1){  //If it is true we pass to the next checking that consis to check if 
					//the number 3 is bigger than the number 1
			low = n1;		//If it is true we save the values in the variables
			high = n2;
			middle = n3;
		} else if (n1 > n2){ //If it isn't true we pass to the next checking that consist to
							//check if number 1 is bigger than number 2
			high = n1;		//If it is true we save the values in the variables
			middle = n2;
			low = n3;
		} else {			//If it isn't true we save the values in the next variables because we
						   //don't have more options
			middle = n1;
			high = n2;
			low = n3;
		}
	}
	else if (n3 > n2){	//If the second part wasn't true we check if the number 3 is bigger than number 2
		if(n2 > n1){	//If it is true we pass to the next checking that consis to check if 
					   //the number 2 is bigger than the number 1
			low = n1;			//If it is true we save the values in the variables
			middle = n2;
			high = n3;
		} else if (n1 > n3){  //If it isn't true we pass to the next checking that consist to
							 //check if number 1 is bigger than number 3
			high = n1;		//If it is true we save the values in the variables
			low = n2;
			middle = n3;
		} else {			//If it isn't true we save the values in the next variables because we
						   //don't have more options
			middle = n1;
			low = n2;
			high = n3;
		}
	}
	printf("The sort numbers are %d %d %d\n",high,middle,low); //Finally we print the values ordered from
															   //highest to lowest
}

