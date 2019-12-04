
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream outputFile("family.txt");

	if (!outputFile)
	{
		cerr << "File opening error" << endl;
		return 1;
	}

	string name, relation;
	int age;
	char input;

	do {
		cout << "Family Member Name:" << endl;
		getline(cin, name);

		cout << "Relationship Designation (ex. Child, Sister):" << endl;
		getline(cin, relation);

		cout << "Age of Family Member:" << endl;
		cin >> age;

		outputFile << name << endl;
		outputFile << relation << endl;
		outputFile << age << endl;

		cout << "Enter another record?" << endl;
		cin >> input;
		cin.ignore();

	} while (input == 'Y');

	outputFile.close();
	cout << "File Successfully Saved!" << endl;

	return 0;
}