/*
 * homework_9.cpp
 *
 *  Created on: Dec 9, 2019
 *      Author: gregorytaylor
 */

#include <iostream>
#include <string>
#include <array>

#include "animals.h"

using namespace std;

//function prototypes

string convert(Crow);
string convert(Octopus);
string convert(Slug);
string convert(Location);
void view_1(Crow[], int);
void view_2(Octopus[], int);
void view_3(Slug[], int);
void fill_zoo(Crow[], Octopus[], Slug[]);
void welcome();
void navigate(Location&, Crow[], Octopus[], Slug[]);


int main()
{
	Location current = entrance;

	Crow crows[3];
	Octopus octopi[3];
	Slug slugs[3];

	fill_zoo(crows, octopi, slugs);

	welcome();

	while (current != leaving)
	{
		navigate(current, crows, octopi, slugs);
	}

	cout << "Thanks for the visit! Bye =)" << endl;
	return 0;
}

string convert(Crow type)
{
	return "CROWS";
}

string convert(Octopus type)
{
	return "OCTOPI";
}

string convert(Slug type)
{
	return "SLUGS";
}

string convert(Location spot)
{
	switch (spot)
	{
		case entrance:
			return "ENTRANCE";
		case exhibit_1:
			return "EXHIBIT 1";
		case exhibit_2:
			return "EXHIBIT 2";
		case exhibit_3:
			return "EXHIBIT 3";
		case leaving:
			return "EXIT";
	}
}

void view_1(Crow array[], int size)
{
	Crow crow;
	cout << "You approach the 1st exhibit. Marked '" << convert(crow) << "'" << endl;
	cout << "Your ocular device displays the following information:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*** Specimen " << i + 1 << " ***" << endl;
		cout << "Name: " << array[i].name << endl;
		cout << "Color: " << array[i].color << endl;
		cout << "Propensity to 'Caw': ";
		(array[i].cawing == true ? cout << "HIGH" << endl : cout << "LOW" << endl);
		cout << endl;
	}
}

void view_2(Octopus array[], int size)
{
	Octopus oct;
	cout << "You approach the 2nd exhibit. Marked '" << convert(oct) << "'" << endl;
	cout << "Your ocular device displays the following information:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*** Specimen " << i + 1 << " ***" << endl;
		cout << "Name: " << array[i].name << endl;
		cout << "Color: " << array[i].color << endl;
		cout << "Weight: " << array[i].size << "lbs" << endl;
		cout << endl;
	}
}

void view_3(Slug array[], int size)
{
	Slug slug;
	cout << "You approach the 3rd exhibit. Marked '" << convert(slug) << "'" << endl;
	cout << "Your ocular device displays the following information:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*** Specimen " << i + 1 << " ***" << endl;
		cout << "Name: " << array[i].name << endl;
		cout << "Color: " << array[i].color << endl;
		cout << "Shell: ";
		(array[i].shell == true ? cout << "YES" << endl : cout << "NO" << endl);
		cout << "Slim Level: ";
		(array[i].slime == true ? cout << "HIGH" << endl : cout << "LOW" << endl);
		cout << endl;
	}
}

void fill_zoo(Crow crows[], Octopus octopi[], Slug slugs[])
{
	int const exhibit_capacity = 3;

	// crows
	for (int i = 0; i < exhibit_capacity; i++)
	{
		cout << "Crow " << i + 1 << ":" << endl;

		cout << "What is this crow's name?" << endl;
		getline(cin, crows[i].name);

		cout << "What color is this crow?" << endl;
		getline(cin, crows[i].color);

		cout << "Is this crow cawing? (1 = 'yes', 0 = 'no')" << endl;
		cin >> crows[i].cawing;
		cin.ignore();

		cout << "Crow Created!!!" << endl;
	}

	// octopi
	for (int i = 0; i < exhibit_capacity; i++)
	{
		cout << "Octopus " << i + 1 << ":" << endl;

		cout << "What is this octopus's name?" << endl;
		getline(cin, octopi[i].name);

		cout << "How many pounds does this octopus weight?" << endl;
		cin >> octopi[i].size;
		cin.ignore();

		cout << "What color is this octopus?" << endl;
		getline(cin, octopi[i].color);

		cout << "Octopus Created!!!" << endl;
	}

	// slugs
	for (int i = 0; i < exhibit_capacity; i++)
	{
		cout << "Slug " << i + 1 << ":" << endl;

		cout << "What is this slug's name?" << endl;
		getline(cin, slugs[i].name);

		cout << "What color is this slug?" << endl;
		getline(cin, slugs[i].color);

		cout << "Is this slug slimy? (1 = 'yes' 0 = 'no')" << endl;
		cin >> slugs[i].slime;

		cout << "Does this slug have a shell? (1 = 'yes' 0 = 'no')" << endl;
		cin >> slugs[i].shell;
		cin.ignore();

		cout << "Slug Created!!!" << endl;
	}
}

void welcome()
{
	cout << "Welcome to Greg's Grand Metaphysical Zoo!!!" << endl;
	cout << "There are crows, octopi, and slugs on display" << endl;
}

void navigate(Location &now, Crow crows[], Octopus octopi[], Slug slugs[])
{
	cout << "Current Location: " << convert(now) << endl;

	switch (now)
	{
	case entrance:
		cout << "You see the imposing, but open, front gate and, beside it, a map" << endl;
		break;
	case exhibit_1:
		view_1(crows, 3);
		break;
	case exhibit_2:
		view_2(octopi, 3);
		break;
	case exhibit_3:
		view_3(slugs, 3);
		break;
	case leaving:
		break;
	}

	int destination;

	cout << "Where would you like to go now?" << endl;

	cout << "1) Entrance" << endl;
	cout << "2) Exhibit 1 " << convert(crows[1]) << endl;
	cout << "3) Exhibit 2 " << convert(octopi[1]) << endl;
	cout << "4) Exhibit 3 " << convert(slugs[1]) << endl;
	cout << "5) Exit" << endl;

	cin >> destination;

	if (destination == 1)
	{
		now = entrance;
	}
	if (destination == 2)
	{
		now = exhibit_1;
	}
	if (destination == 3)
	{
		now = exhibit_2;
	}
	if (destination == 4)
	{
		now = exhibit_3;
	}
	if (destination == 5)
	{
		now = leaving;
	}

	return;
}
