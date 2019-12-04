
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/******************************************************************************
 * Function Prototype                                                         *
 ******************************************************************************/
void printParallel(vector<double> doubleVec, vector<string> stringVec);

/******************************************************************************
 * main - starting point                                                      *
 ******************************************************************************/
int main() {
	// user declares size
	int size;
	cout << "Please select vector size: ";
	cin >> size;
    const int SIZE = size;

    vector<double> firstVec(SIZE);

    // range-based for loop to get user input
    for (double &item : firstVec)
    {
    	cout << "Input a decimal value : ";
    	cin >> item;
    }

    // declare second array
    vector<string> secondVec;

    // for loop to get user input
    cin.ignore();
    for (int i = 0; i < SIZE; i++)
    {
    	cout << "Please enter the associated codeword for each observation: ";
    	string input;
    	getline(cin, input);
    	secondVec.push_back(input);
    }

    // function call
    printParallel(firstVec, secondVec);

    // terminate
    return 0;
}

/******************************************************************************
 * Function Definition                                                        *
 ******************************************************************************/
void printParallel(vector<double> doubleVec, vector<string> stringVec)
{
	int i = 0;

    while (i < doubleVec.size())
    {
    	cout << doubleVec.at(i) << " " << stringVec.at(i) << endl;
    	i++;
    }
}