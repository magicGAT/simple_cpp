
#include <iostream>
#include <string>

using namespace std;

int main() {
    // prompt and gather input for number of iterations
    int limit = 0;
    do
    {
    	cout << "How many times would you like to repeat yourself?" << endl;
    	cin >> limit;
    }while (limit <= 0);

    // prompt and gather input for message
    string msg = "";
    cout << "What would you like to say???" << endl;
    cin.ignore();
    getline(cin, msg);
    cout << "Let us begin..." << endl;

    // for loop to print a message
    for (int counter = limit; counter > 0; counter--)
    {
    	cout << counter << endl;
    	cout << msg << endl;
    }

    // terminate
    return 0;
}