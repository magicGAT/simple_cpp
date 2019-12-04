
#include <iostream>
#include <string>

using namespace std;

struct Gorilla
{
	string name;
	int weight;
	string color;
	bool sex;
	int age;
	int power_level;
};

Gorilla create_gorilla();
void display_gorilla(Gorilla);

int main()
{
	Gorilla my_gorilla =
	{
			"Bronson", 1000, "albino", 1, 13, 9001
	};

	display_gorilla(my_gorilla);

	cout << endl << endl;
	cout << "Now you will design your own gorilla!!!" << endl;

	Gorilla user_gorilla;

	user_gorilla = create_gorilla();

	display_gorilla(user_gorilla);

	return 0;
}

Gorilla create_gorilla()
{
	Gorilla creation;
	cout << "Name your gorilla: " << endl;
	cin >> creation.name;

	cout << "Input weight: " << endl;
	cin >> creation.weight;

	cout << "What color is your gorilla: " << endl;
	cin >> creation.color;

	cout << "Select sex (1 for male 0 for female): " << endl;
	cin >> creation.sex;

	cout << "Input age: " << endl;
	cin >> creation.age;

	cout << "Input power level: " << endl;
	cin >> creation.power_level;

	return creation;
}

void display_gorilla(Gorilla subject)
{
	cout << "--.GORILLA REPORT.--" << endl;
	cout << "Name: " << subject.name << endl;
	cout << "Weight: " << subject.weight << endl;
	cout << "Color: " << subject.color << endl;
	cout << "Sex: " << (subject.sex ? "male" : "female") << endl;
	cout << "Age: " << subject.age << endl;
	cout << "Power Level: " << subject.power_level << endl;
}
