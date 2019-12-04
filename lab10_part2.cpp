
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // create variables to hold the data from the file
    string userName = "", userMsg = "";
    int userAge = 0;
    char userAnswer = '\0';

    // read the user's information from a file called userInfo.txt
    ifstream inputF;
    inputF.open("userInfo.txt");

    getline(inputF, userName);
    inputF >> userAge;
    inputF.ignore();
    getline(inputF, userMsg);
    inputF >> userAnswer;

    // display the information to the console
    cout << "Name: " << userName << endl;
    cout << "Age: " << userAge << endl;
    cout << "Message: " << userMsg << endl;
    cout << "Likes vegan tacos: " << userAnswer << endl;

    // terminate
    return 0;
}
