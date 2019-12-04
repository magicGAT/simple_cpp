
#include <iostream>

using namespace std;

int main() {
    // declare and initialize variables
    int num = 0;

    // prompt for input
    cout << "Enter a number between 5 and 10: " << endl;
    cin >> num;

    // validation loop
    while (num < 5 || num > 10)
    {
    	cout << "Error! Enter a number between 5 and 10:" << endl;
    	cin >> num;
    }

    // print loop
    cout << "Countdown starting!\n";

    while (num > 0)
    {
    	cout << num << "...";
    	num--;
    }

    cout << "\nBlast off!\n";

    // terminate
    return 0;
}