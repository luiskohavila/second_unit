#include <stdio.h> //Standar inputs and outputs, has the main functions in c
#include <stdlib.h> //Standar library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

/////////////////////////////////////////////////////////////////////////////////////
//////////////////Pseudocode examination to code in C, 4 exercises./////////////////
///////////////////////////////////////////////////////////////////////////////////

//Perfect numbers

int main() {
int total, divisor,number,aux; //Declare the variables
    for (number = 1; number <= 1000; number++) { //For cycle 1 to 1000
    total=0;
    for (divisor = 1; divisor <= number; divisor++){ //For cycle of divisors until the number
    if (number%divisor==0){ //Condition if number is divisible by the divisor
                total = total + divisor; //If it is true sum total and divisor
                aux = (total)/2; //Then divide the result between 2
            }
        }
        if (aux==number){ //If the auxiliar is equal to the number
            printf("%d is a perfect number\n",number); //Means that it is perfect and we printed
        }
    }
}
