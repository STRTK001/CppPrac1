﻿// CppPrac1.cpp : Defines the entry point for the application.
//


#include <iostream>
/* The following are function declarations. They _declare_ that the functions
exist but they do not _define_ what the functions actually do (the definitions
appear after the main function). By declaring these functions here, they may be
called in the main before they are defined.
Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/
void function1(int);
void function2(int*);

void part1();
void part2();

/* function to read number from standard input (keyboard) */ 
void getNumber(int*);
/* function to calculate the sum of two numbers */
void calculateSum(int, int, int*);
/* function to display details to the screen */
void displayDetails();

int main() 
{
	std::cout << "__ PART 1 __ \n";
	part1();
	std::cout << "__ PART 2 __ \n";
	part2();

	return 0;
}

void part1()
{
	int number = 10;
	/* C1. display the contents of number to the screen */
	std::cout << "1. The number is " << number << std::endl;

	/* C2. display the address of variable number to the screen */
	std::cout << "2. The address of the number var is " << &number << std::endl;

	/* C3. call function1 */
	function1(number);

	/* C4. display the contents of number to the screen */
	std::cout << "5. The number after function1 is " << number << std::endl;

	int* numPtr = &number;
	/* C5. call function2 */
	function2(numPtr);

	/* C6. display the contents of number to the screen */
	std::cout << "9. The number after function2 is " << number << std::endl;
}

void function1(int number)
{
	/* C7. increment number by one */
	number++;
	/* C8. display the contents of number to the screen (should be 11) */
	std::cout << "3. The incremented number is " << number << std::endl;
	/* C9. display the address of number to the screen */
	std::cout << "4. and its address is  " << &number << std::endl;
	
}
void function2(int* numberPtr)
{
	/* C10. display the address of number to the screen (should be the same
	address as you displayed first in main) */
	std::cout << "6. The number ptr address is " << numberPtr << std::endl;

	/* C11. display the value that the pointer numberPtr points to */
	std::cout << "7. The number ptr value is " << *numberPtr << std::endl;

	/* C12. increment the value stored in number */
	(*numberPtr)++;

	/* C13. display the contents of number to the screen */
	std::cout << "8. The number ptr value after incremented is " << *numberPtr << std::endl;
}

void part2()
{
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();
	/* prompt for and read first number */
	std::cout << "Please enter first number : ";
	getNumber(&num1);
	/* prompt for and read second number */
	std::cout << "Please enter second number: ";
	getNumber(&num2);
	/* add two numbers together and display to screen */
	calculateSum(num1, num2, &sum);
	std::cout << std::endl << "\nSum of " << num1 << " and " << num2 << " is: " <<
	sum << std::endl << std::endl;
}

/* function to read number from standard input (keyboard) */
void getNumber(int* numPtr) 
{
	int num;
	std::cin >> num;

	*numPtr = num;
}
/* function to calculate the sum of two numbers */
void calculateSum(int number1, int number2, int* sumPtr) 
{
	*sumPtr = number1 + number2;
}
/* function to display details to the screen */
void displayDetails() 
{
	std::cout << "Author : Travis Strawbridge" << std::endl;
	std::cout << "Stud ID : 110 something" << std::endl;
	std::cout << "Email : strtk001@mymail.unisa.edu.au" << std::endl;
}