#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string target_file;

	cout << "This program will create and save a file containing 3 integers and a message written by you" << endl;
	cout << "Please give the file a name (ending with '.txt'): " << endl;
	getline(cin, target_file);

	ofstream outputFile(target_file);

	if (outputFile.fail())
	{
		cerr << "Invalid File Name!!!" << endl;
		return 4;
	}

	int int_1, int_2, int_3;
	string user_message;
	char signal = 'Y';

	while (signal == 'Y' || signal == 'y')
	{
		cout << "Please enter an integer (1/3): ";
		cin >> int_1;
		cout << endl;

		cout << "Please enter another integer (2/3): ";
		cin >> int_2;
		cout << endl;

		cout << "Please enter a final integer (3/3): ";
		cin >> int_3;
		cout << endl;

		cin.ignore();

		cout << "Now, enter a message for this file" << endl;
		getline(cin, user_message);

		outputFile << int_1 << " " << int_2 << " " << int_3 << endl << user_message;

		cout << endl << "Would you like to repeat this process? (enter 'y' or 'Y')" << endl;
		cin >> signal;
	}

	cout << endl << "Inputs Accepted." << endl << target_file << " saved!" << endl;

	outputFile.close();

	return 0;
}