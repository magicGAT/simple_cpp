/*
 * main.cpp
 *
 *  Created on: Jan 2, 2020
 *      Author: gregorytaylor
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sender, recip, f_name;
	char f_sex = 0;
	int r_age = 0;

	cout << "Enter your name (the sender): ";
	getline(cin, sender);
	cout << endl;

	cout << "Enter the name of the target (the receiver): ";
	getline(cin, recip);
	cout << endl;

	cout << "Enter a mutual friend's name: ";
	getline(cin, f_name);
	cout << endl;

	cout << "What is this friend's gender? ('m' for male, 'f' for female): ";
	cin >> f_sex;
	cout << endl;

	cout << "What the recipient's age?: ";
	cin >> r_age;

	cout << endl;

	if (r_age <= 0 || r_age > 110)
	{
		cerr << "ERROR: IMPOSSIBLE_AGE" << endl;
		return -1;
	}

	cout << "Dear " << recip << "," << endl << endl;
	cout << "  How are you?" << endl;

	cout << "  Have you seen " << f_name << " lately?" << endl << endl;
	cout << "  If you see ";
	(f_sex == 'm' ? cout << "him, " : cout << "her, ");
	cout << "can you tell ";
	(f_sex == 'm' ? cout << "him" : cout << "her");
	cout << " to text me?" << endl << endl;

	cout << "  I know you recently had a birthday and you are now " << r_age;
	cout << " years old! Congratulations my friend =). " << endl << endl;

	if (r_age < 12)
	{
		cout << "  Next year you will be " << r_age + 1 << "." << endl << endl;
	}

	if (r_age == 17)
	{
		cout << "  Next year, you will be able to vote.. Rue the day ;)." << endl << endl;
	}

	if (r_age > 70)
	{
		cout << "  I hope you are enjoying retirement." << endl << endl;
	}

	cout << "Sincerely," << endl;
	cout << endl << endl;
	cout << sender << endl;

	return 0;
}