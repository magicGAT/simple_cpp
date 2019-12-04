
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile("family.txt");

	string name, relation;
	int age;

	while (!inputFile.fail())
	{
		getline(inputFile, name);
		getline(inputFile, relation);
		inputFile >> age;
		inputFile.ignore();

		cout << "Name: " << name << endl;
		cout << "Relation: " << relation << endl;
		cout << "Age: " << age << endl << endl;
	}

	inputFile.close();
	return 0;
}

