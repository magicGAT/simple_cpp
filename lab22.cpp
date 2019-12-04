
#include <iostream>
#include <string>

using namespace std;

enum Size
{
	massive,
	super_massive,
	colossal,
	gargantuan,
	beyond_comprehension
};

struct Gorilla
{
	string name;
	Size g_size;
	string color;
	bool sex;
	int age;
	int power_level;
};

Gorilla create_gorilla();
void display_gorilla(Gorilla);
string convert_size(Size);

int main()
{
	Gorilla my_gorilla =
	{
			"Bronson",
			static_cast<Size>(3),
			"albino",
			1,
			13,
			9001
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

	int x;
	cout << "Input size on a scale from 0 - 4: " << endl;
	cin >> x;
	creation.g_size = static_cast<Size>(x);

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
	cout << endl << "--.GORILLA REPORT.--" << endl;
	cout << "Name: " << subject.name << endl;
	cout << "Size: " << convert_size(subject.g_size) << endl;
	cout << "Color: " << subject.color << endl;
	cout << "Sex: " << (subject.sex ? "male" : "female") << endl;
	cout << "Age: " << subject.age << endl;
	cout << "Power Level: " << subject.power_level << endl;
}

string convert_size(Size g_size)
{
	string str;

	switch (g_size)
	{
		case massive:
			return "Massive!";
		case super_massive:
			return "Super Massive!";
		case colossal:
			return "Colossal!";
		case gargantuan:
			return "Gargantuan!";
		case beyond_comprehension:
			return "Beyond Comprehension!!!";
		default:
			return "Did you forget to input a size???";
	}
}