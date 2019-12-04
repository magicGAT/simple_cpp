
#include <iostream>

using namespace std;

int findMax(int numbers[], int numSize);
bool isValid(int x);

int main()
{
	const int ARRAY_SIZE = 7;
	int my_arr[ARRAY_SIZE], my_max;
	int counter = 1;

	cout << "In this program we will enter a set of 7 numbers, then find and report the largest of those 7!" << endl << endl;

	for (int &element : my_arr)
	{

		bool gate_keeper = false;

		while (gate_keeper == false)
		{
			cout << "Enter integer " << counter << " (must be between >24 and <83): " << endl;
			cin >> element;

			gate_keeper = isValid(element);
		}

		counter++;
	}

	my_max = findMax(my_arr, ARRAY_SIZE);

	cout << "FINAL MAX: " << my_max << endl;

	return 0;
}

int findMax(int numbers[],int numSize)
{
	int max;

	max = numbers[0];

	for (int i = 0; i < numSize; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}

	return max;
}

bool isValid(int x)
{
	if (x >= 25 && x <= 82)
	{
		return true;
	}

	else
	{
		return false;
	}
}