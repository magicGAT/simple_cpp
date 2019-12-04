
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // get the user's name
    // validation: can't be empty
    string userName;
    do {
        cout << "Enter your name: " << endl;
        getline(cin, userName);
    } while (userName.length() == 0);

    // get the user's age
    // validation: can't be 0 or negative
    int userAge = 0;
    while (!(userAge > 0))
    {
    	cout << "Please insert your correct age" << endl;
    	cin >> userAge;

    }
    // get a message from the user
    // validation: can't be empty
    string userMsg = " ";
    cin.ignore();
    do
    {
    	cout << "Please type a personal message" << endl;
    	getline(cin, userMsg);
    } while (userMsg == " " || userMsg == "\n");

    // does the user like vegan tacos?
    // validation: must be y, Y, n, or N
    char userAnswer;
    while (!(userAnswer == 'y' || userAnswer == 'v' || userAnswer == 'Y' || userAnswer == 'V'))
    {
    	cout << "Do you like vegan tacos?" << endl;
    	cin >> userAnswer;
    }

    cout << "Input Received! Thank You :)" << endl;

    // write the user's information to a file called userInfo.txt
    ofstream outputF;
    outputF.open("userInfo.txt");

    outputF << userName << endl;
    outputF << userAge << endl;
    outputF << userMsg << endl;
    outputF << userAnswer << endl;

    outputF.close();

    // terminate
    return 0;
}