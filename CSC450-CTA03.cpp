/* Name: Evan Raab
 * Project Name: CSC450-CTA03 - Integer Pointers Program
 * Project Purpose: Assign user input into dynamic memory
 * Algorithm Used: Prompt user for input, create variables to store input, then assign variables to pointers. Used new operators to assign pointers and delete to clear memory
 * Program Inputs: int userInputOne, userInputTwo, userInputThree
 * Program Outputs: Values of variables and pointer addresses
 * Program Errors: If user enters a non-integer value, program fails
*/

#include <iostream>
using namespace std;

int main() {


	// create three different variables
	int userInputOne;
	int userInputTwo;
	int userInputThree;

	// prompts user to enter integers and stores them into the variables
	std::cout << "Enter a number: "; std::cin >> userInputOne;
	std::cout << "Enter another number: "; std::cin >> userInputTwo;
	std::cout << "Enter one more number: "; std::cin >> userInputThree;

	// using the new operator to create an integer pointer to dynamic memory for each variable
	int* pointerOne  = new int(userInputOne);
	int* pointerTwo = new int(userInputTwo);
	int* pointerThree = new int(userInputThree);


	//Displays the contents of the variables and pointers.
	std::cout << "Value of first variable: " << *pointerOne << '\n';
	std::cout << "Address of first pointer: " << pointerOne << '\n';
	std::cout << "Value of second variable: " << *pointerTwo << '\n';
	std::cout << "Address of second pointer: " << pointerTwo << '\n';
	std::cout << "Value of third variable: " << *pointerThree << '\n';
	std::cout << "Address of third pointer: " << pointerThree << '\n';

	//uses the delete operator to manage memory
	delete pointerOne;
	delete pointerTwo;
	delete pointerThree;
}
