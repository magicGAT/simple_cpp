
#include <iostream>
#include <cmath>

using namespace std;

void calc(double& result, double x, double y = 1.5);

int main()
{
	double result, x, y;

	for (int i = 0; i < 5; i++)
	{
		int choice = 0;

		while (!(choice == 1) && !(choice == 2))
		{
			cout << "Enter a number of arguments (1 or 2):" << endl;
			cin >> choice;
		}

		if (choice == 1)
		{
			cout << "Enter a floating point: " << endl;
			cin >> x;
			calc(result, x);
		}

		else
		{
			cout << "Enter floating point 1: " << endl;
			cin >> x;
			cout << "Enter floating point 2: " << endl;
			cin >> y;
			calc(result, x, y);
		}

		cout << "Result: " << result << endl << endl;
	}

	return 0;
}

void calc(double& result, double x, double y)
{
	static double z = 4.23;

	cout << "Current 'Z' factor: " << z << endl;

	result = ((x * y) / 3) + sqrt(z);

	z *= 1.79;
}