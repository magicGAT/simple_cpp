
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// variable declaration
	char letter, letter_2;
	string fullName, city;

	// input gathering
	cout << "Enter your full name: " << endl;
	getline(cin, fullName);

	cout << "Enter a single letter to continue: " << endl;
	cin >> letter;
	cin.ignore();

	cout << "Enter your current city: " << endl;
	getline(cin, city);

	// display you information here
	cout << "Name: " << fullName << endl;
	cout << "City: " << city <<  endl;
	cout << "Your personal exit character: " << letter << endl;

	// display the lengths of fullName and city
	cout << "Name Length: " << fullName.length() << endl;
	cout << "City Name Length: " << city.length() << endl;

	// ask for exit prompt
	cout <<  "Please Enter Your Personal Exit Character: " << endl;
	cin.get(letter_2);

	if ( letter == letter_2)
		{cout << "Goodbye ;) " << endl;}
		else
		{cout << "Wrong!" << endl;}

	// termination
	return 0;
}