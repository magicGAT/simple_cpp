
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	// cctype experiments (isdigit(), ispunct(), isspace())
	char object;

	cout << "Enter a character and its classification will be returned to you via the console:" << endl;
	cin >> object;

	if (isalpha(object))
		cout << "Your input is a letter" << endl;

	if (isdigit(object))
		cout << "Your input is a number" << endl;

	if (ispunct(object))
		cout << "Your input is a symbol/punctuation mark" << endl;

	if (isspace(object))
		cout << "Your input is a whitespace character" << endl;

	cout << endl;

	// cstring experiments (strlen(), strncat(), strcpy())
	char string_1[50], string_2[50];

	cout << "Now you will be asked for a couple of words..." << endl;

	cout << "Please enter word 1" << endl;
	cin >> string_1;
	cout << endl << "Word 1: " << string_1 << endl;
	cout << "Word 1 length: " << strlen(string_1) << endl << endl;

	cout << "Please enter word 2: " << endl;
	cin >> string_2;
	cout << endl << "Word 2: " << string_2 << endl;
	cout << "Word 2 length: " << strlen(string_2) << endl << endl;

	int flag;

	cout << "Would you like to combine these words? (input 1 to do so) (this will permanently change word 1)" << endl;
	cin >> flag;

	if (flag == 1)
	{
		cout << strncat(string_1, string_2, 50) << endl;
	}

	cout << "Would you like to permanently replace the current word 1 to be a copy of word 2? (input 2 to do so)" << endl;
	cin >> flag;

	if (flag == 2)
	{
		strcpy(string_1, string_2);
		cout << "New Word 1: " << string_1 << endl;
	}

	// string experiments (empty(), length(), swap())
	string x;
	string y = "You didn't input anything!";
	string z = "WRONG!";
	string w = "You have succeeded";

	cout << "Please enter a word which is more then 7 letters long: " << endl;
	cin >> x;
	cout << endl;

	if (x.empty())
	{
		x.swap(y);
	}

	else if (x.length() < 7)
	{
		x.swap(z);
	}

	else
	{
		x.swap(w);
	}

	cout << x << endl;


	return 0;
}
