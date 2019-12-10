
#include <iostream>
#include <string>
#include <fstream>

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
	bool save_gorilla();
};

struct Gorilla_save
{
	const char* name;
	Size g_size;
	const char* color;
	bool sex;
	int age;
	int power_level;

};
Gorilla create_gorilla();

Gorilla load_gorilla();
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
	Gorilla new_gorilla;

	user_gorilla = create_gorilla();

	display_gorilla(user_gorilla);

	new_gorilla = load_gorilla();

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
	cin.ignore();

	creation.save_gorilla();

	return creation;
}

bool Gorilla::save_gorilla()
{
	string file_name;

	cout << "Please input a '.txt' filename for this gorilla: " << endl;
	getline(cin, file_name);

	fstream my_file;
	Gorilla_save transfer;

	transfer.name = name.c_str();
	transfer.g_size = g_size;
	transfer.color = color.c_str();
	transfer.sex = sex;
	transfer.age = age;
	transfer.power_level = power_level;

	my_file.open(file_name, ios::out | ios::binary);


	my_file.write(reinterpret_cast<char*>(&transfer), sizeof(transfer));

	my_file.close();

	return true;
}

Gorilla load_gorilla()
{
	string file_name;
	Gorilla output;
	Gorilla_save transfer;

	fstream my_file;

	cout << "Please enter the full gorilla filename:" << endl;
	getline(cin, file_name);

	my_file.open(file_name, ios::in | ios::binary);

	my_file.read(reinterpret_cast<char*>(&transfer), sizeof(transfer));

	my_file.close();

	output.name = static_cast<string>(transfer.name);
	output.g_size = transfer.g_size;
	output.color = static_cast<string>(transfer.color);
	output.sex = transfer.sex;
	output.age = transfer.age;
	output.power_level = transfer.power_level;

	display_gorilla(output);

	return output;
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