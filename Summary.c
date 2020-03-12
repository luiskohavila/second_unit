//Summary of all major concepts, it must include the subjects of the syllabus in format of learnxinyminutes
//declarate, definite, types, in and out formats (void, int, return, etc).

//Type of programming languages

//Low level: Type of programming language that contains basic instructions recognized by a computer
//High level: Enables to write programs that are independent of a particular type of computer.

//Structure of computer programs
//Headboard: Information that we use at the beginning of our program where the information are
//going to be stored and transmitted

//Libraries: Are a collection of inbuilt functions that we use to do specific operations

#include <stdio.h> //Standard inputs and outputs, has the main functions in c
#include <stdlib.h> //Standard library, it contains functions and manage processes
#include <string.h> //It contains macro definitions, constants and declarations of functions
#include <math.h> //Defines various mathematical functions and one macro

//Variables: Is a word or letter that we use to storage values
//Types of variables:
//char a = 'e'; //size= 1byte
//short b = -15; //size= 2bytes
//int c = 1024; //size=2bytes
//unsigned int d = 128; //size= 2bytes
//long e = 123456; //size= 4 bytes
//float f = 15.342; //size= 4bytes
//double m = 123456.123456; //size= 8bytes

//Start: This part is where we iniciate the program using the int mains, there are many types:
//-int main(): It is using to define the entry points in our program and it returns two types of
//values to the operating system true = 1 and false = 0

//Body: As its name said we use the body to write all the principal structure in our program, that
//include the variables, the operations, cycles and functions

//The end: At the end of a program we use normally the output values such as the values that we want
// to show on screen and also we can write at the end return 0; which means that the program had
//a successful termination and all is ok

//Elements of the computer programs: 
//Reservedwords: Also called keyworkds, they have standard, predefined meanings in C; Types:
//- Data types
//int: Specify a value of type integer
//char: Specify a value of type character
//-float: Specify a value of type Float
//-double: Specify a value of double precision of floating type

//-Loop Control Structures
//For: The use of for cycle
//While: Use While cycle
//Do: Use Do While cycle

//-Jumping Control
//-Break: Force the termination of a loop
//-Continue: Takes the control of the beginning of a loop
//-Goto: Takes control of a place in the program

//-Others:
//-if, else, switch, case, default: Decisions
//-sizeof: Used to know the size of a variable
//-return: Used to return a value

//Identifiers: Are names that we use to assigned by the user to identify a variable, function, etc

//-Constants: Are values that cannot change during the execution of a program
//Literal constants: Values of any type that we use directly, it doesn't have to be declared
//- Area_of_rectangle = 4*10
//Declared constants: Are declared in the section const assigning it a value
//- Pi = 3.141592
//Expression constants: We assigned expressions in this constants as the name said
//- Area_of_triangle = (Base * High)/2
 
//Operators:
//-Arithmetic Operators
// + To sum values
// - To subtract values
// * To multiply values
// / To divide values
// % Module that give the remainder of a division

//-Logic operators
// && (and) To check if all the operands are true
// || (or) To check if only one operand are true
// !  (not) Is true if an operand is 0

//-Relational operators
// == Means equal to
// >  Means greater than
// <  Means less than
// != Means not equal to
// >= Means greater or equal
// <= Means less or equal

//-Assignment Operators
// =  Assignment
// += Addition assignment
// -= Subtraction assignment
// *= Multiplication assignment
// /= Division assignment
// %= Remainder assignment

//Punctuation marks:
//The most common punctuation marks in programming languages are:

//-[] Square brackets indicate subscripts of a matrix.
//-() Parenthesis are used to aislate conditional expressions, indicate called functions, 
//and indicate parateters
//-{} Are used to indicate the beginning and the end of a setence such as int main, if, for
//-; Is the end of sentence sign and is used at the end of all lines of code c
//-, The comma is used to separate parameters in list of parameters and fuctions as cycles
//-* Asterisk has many applications, the first is to declare a variable as a pointer, also is used as a indirection 
//operator and using to multiply numbers
//-= The equal sign is used to separe the declaration of the variables and also as a
//asignation operation
//-# Has the use of define values in the code and insert the different type of libraries

//Type of errors

//-Syntax error: Appears when we do an error in the writting of the code missing a letter, and the program
//is unable to execute the code
//-Execution error: Appears when the code have something that can´t be possible, and crash the program 
//during the running
//-Logic error: The programs execute the program correctly but there are mistakes in the code that changes
//the result

