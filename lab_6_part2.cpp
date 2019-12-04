
#include <iostream>

using namespace std;

int main()
{
	char grade;
	int score;

	cout << "Please enter your overall grade in the class: ";
	cin >> score;

	if (score >= 62)
	{
		grade = 'P';
		cout << "Congrats, you passed!\n";
	}
	else
	{
		if (score < 0)
		{
			grade = 'X';
			cout << "You entered a negative score!\n";
		}
		else
		{
			grade = 'N';
			cout << "Sorry, you failed!\n";
		}
	}

	cout << "Your letter grade is: "
		 << grade
		 << endl;

	return 0;
}
