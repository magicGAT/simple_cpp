
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// random number seed
	srand(time(0));

	//declare and intialize 3 random number variables
	int x = rand(), y = rand(), z = rand();

	//display values
	cout << "Values" << endl;

	cout << setw(12)
		 << x
		 << setw(12)
		 << y
		 << setw(12)
		 << z
		 << endl;

	//display sin of values
	cout << "Sine" << endl;

	cout << setw(12)
		 << sin(x)
		 << setw(12)
		 << sin(y)
		 << setw(12)
		 << sin(z)
		 << endl;

	//display cosine of values
	cout << "Cosine" << endl;

	cout << setw(12)
		 <<cos(x)
		 << setw(12)
		 << cos(y)
		 << setw(12)
		 << cos(z)
		 << endl;

	// display the square root
	cout << "Square Root" << endl;

	cout << setw(12)
		 << sqrt(x)
		 << setw(12)
		 << sqrt(y)
		 << setw(12)
		 << sqrt(z)
		 << endl;

	// display the log of each variable
	cout << "Natural Log" << endl;

	cout << setw(12)
		 << log(x)
		 << setw(12)
		 << log(y)
		 << setw(12)
		 << log(z)
		 << endl;

	return 0;
}
