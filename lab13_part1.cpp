
#include <iostream>

using namespace std;

// function prototypes
int getUserNumber();
void printSum();

// the main function
int main() {
    printSum();
    return 0;
}

// prompt the user to enter a number
// store that input to a variable
// then return that variable
int getUserNumber()
{
	double user_input;

	cout << "Enter a number:" << endl;
	cin >> user_input;

	return user_input;
}

// get two numbers from the user
// display the sum of those two numbers
void printSum()
{
	double first, second;

	cout << "Enter your first number:" << endl;
	cin >> first;

	cout << "Enter your second number:" << endl;
	cin >> second;

	cout << "The sum of those numbers is " << first + second << endl;
}