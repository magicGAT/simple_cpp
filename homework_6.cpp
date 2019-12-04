
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool writeFile();
bool readFile();
bool isInRange(int minVal, int maxVal, int num);
int getUserNumber();
int findBigger(int a, int b);

int main()
{
	// main menu loop
	int navigator;

	while (navigator != 3)
	{
		cout << "Welcome to the ez_file system!" << endl;
		cout << "1) Write to File" << endl;
		cout << "2) Read from File" << endl;
		cout << "3) Exit" << endl;

		cin >> navigator;
		cin.ignore();

		// input validation
		if (navigator > 3 || navigator < 1)
		{
			cout << "Invalid Input..." << endl;
		}
		// file-writing feature
		else if (navigator == 1)
		{
			cout << "File Writer!" << endl;
			writeFile();
		}
		// file-reading feature
		else if (navigator == 2)
		{
			cout << "File Reader!" << endl;
			readFile();
		}
		// program termination
		else
		{
			cout << "Thank you for using the ez_file system!" << endl;
			return 0;
		}
	}

	return 0;
}

bool writeFile()
{
	string new_file;
	int userNumber;
	char func_signal = 'y', file_signal = 'y';

	while (func_signal == 'y')
	{
		cout << "Please name the new file (include .txt file extension):" << endl;
		getline(cin, new_file);

		ofstream outputFile(new_file);

		if (!outputFile)
		{
			cerr << "Error opening file!" << endl;
			return false;
		}
		else
		{
			while (file_signal == 'y')
			{
				do {

					userNumber = getUserNumber();

				}
				while (!isInRange(12, 87, userNumber));

				outputFile << userNumber << endl;

				cout << "Continue writing numbers? (y/n):" << endl;
				cin >> file_signal;
				cin.ignore();

			}

			outputFile.close();
		}

		cout << "Create Another File? (y/n):" << endl;
		cin >> func_signal;
		cin.ignore();
	}

	return true;
}

bool readFile()
{
	string file_name;
	cout << "Please name the file you would like to open (include .txt extension):" << endl;
	getline(cin, file_name);

	ifstream inputFile(file_name);
	char sentinel_1 = 'n';

	if (inputFile.fail())
	{
		cerr << "File failed to open" << endl;
		while (sentinel_1 != 'y')
		{
			cout << "Continue? (y/n): " << endl;
			cin >> sentinel_1;
		}
		return false;
	}
	else
	{
		int save_box,  new_box;
		char sentinel_2 = 'n';

		inputFile >> save_box;

		while (!inputFile.fail())
		{
			inputFile >> new_box;
			save_box = findBigger(save_box, new_box);
		}

		inputFile.close();
		cout << "Largest Value: " << save_box << endl;

		while (sentinel_2 != 'y')
		{
			cout << "Continue? (y/n): " << endl;
			cin >> sentinel_2;
		}
		return true;
	}

}

bool isInRange(int minVal, int maxVal, int num)
{
	if (num <= maxVal && num >= minVal)
	{
		cout << "This number is valid" << endl;
		return true;
	}
	else
	{
		cout << "This number is invalid" << endl;
		return false;
	}
}

int getUserNumber()
{
	int input;
	cout << "Please enter data (numerical):" << endl;
	cin >> input;
	return input;
}

int findBigger(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


