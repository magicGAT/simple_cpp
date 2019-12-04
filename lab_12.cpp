
#include <iostream>
#include <string>

using namespace std;

int multiply(int, int);
void displayMath(double, double);
void repeatMessage(int);


int multiply(int x, int y)
{
	int product = x * y;
	return product;
}

void displayMath(double a, double b)
{
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
}

void repeatMessage(int times)
{
	string input;
	cout << "Please input the message you intend to repeat:" << endl;

	getline(cin, input);

	for(int i = times; i > 0; i--)
	{
		cout << input << endl;
	}

}

int main()
{
	int result = multiply(5, 4);
	displayMath(3.5, 1.5);
	repeatMessage(result);

	return 0;
}