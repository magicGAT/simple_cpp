
#include <iostream>

using namespace std;

// function prototypes
int calculate(int num1, int num2, int num3);
bool checkCondition(int a, int b);

int main() {
    int x, y, z;
    do {
        cout << "Enter 3 numbers: ";
        cin >> x >> y >> z;
    } while (y == 0);

    int result = calculate(x, y, z);

    if (checkCondition(x, result)) {
        cout << "Passed the condition check!\n";
    }
    else {
        cout << "Failed the condition check :(\n";
    }

    return 0;
}

int calculate(int num1, int num2, int num3)
{
	return (num1 * num2) - (num3 / num2) + num2;
}

bool checkCondition(int a, int b)
{
	return a >=b || a == 3;
}