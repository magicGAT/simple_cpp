
#include <cmath>
#include <iostream>

using namespace std;

/*****************************
*     function prototypes    *
*****************************/
int getUserNumber();
bool isValid(int num);
void calculate(int a, int b, int c, int& result);

/*****************************
*       starting point       *
*****************************/
int main()
{
	int num_1, num_2, num_3, num_final;

    // get the first valid number
	do
	{
		num_1 = getUserNumber();
	} while (!isValid(num_1));

    // get the second valid number
	do
	{
		num_2 = getUserNumber();
	} while (!isValid(num_2));

    // get the third valid number
	do
	{
		num_3 = getUserNumber();
	} while (!isValid(num_3));

    // calculate the result
	calculate(num_1, num_2, num_3, num_final);

    // display the result
	cout << "Final Result: " << num_final << "!" << endl;

    // terminate
    return 0;
}

/*****************************
*  function implementations  *
******************************/

int getUserNumber()
{
	int i;

	cout << "Enter number:" << endl;
	cin >> i;

	return i;
}

bool isValid(int num)
{
	if (num >= 25 || (num / 2) + 1 <= 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void calculate(int a, int b, int c, int& result)
{
	result = (5 * a) + pow(b, 3) - c + 1;
}