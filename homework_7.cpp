
#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10;
	float arr1[SIZE];

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter element " << i + 1 << " (decimal value): " << endl;
		cin >> arr1[i];
	}

	float sum = 0;

	for (float value : arr1)
	{
		cout << "Calculating Stats..." << endl;
		sum += value;
	}



	float minimum = arr1[0];
	int counter = 0;

	while (counter < 10)
	{
		if (arr1[counter] < minimum)
			minimum = arr1[counter];
		counter++;
	}

	float max = arr1[0];

	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
	}

	cout << "[";
	for (float element : arr1)
	{
		cout << element << ", ";
	}
	cout << "-end-]" << endl;

	for (int i = 0; i < 10; i++)
	{
		float comp = arr1[i];
		int mark = i;
		for (int i = 0; i < 10; i++)
		{
			if (comp == arr1[i] && i != mark)
			{
				cout << "Duplicate Value Detected: " << comp << endl;
			}
		}
	}

	float average = sum / 10;

	cout << "Sum: " << sum << endl;
	cout << "Minimum: " << minimum << endl;
	cout << "Maximum: " << max << endl;
	cout << "Average: " << average << endl;
	return 0;
}