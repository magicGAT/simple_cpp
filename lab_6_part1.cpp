
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// variable declaration
	int age, num;

	// input prompts
	cout << "Please enter your current age:" << endl;
	cin >> age;

	cout << "Please enter any number:" << endl;
	cin >> num;

	// logic based outputs
	if (num >= 50)
		cout << "The number is 50 or larger!" << endl;

	if (age < 18)
		cout << "You are a minor!" << endl;

	// program termination
	return 0;
}
