
#include <iostream>
#include <string>
using namespace std;

/******************************************************************************
 * Function Prototype                                                         *
 ******************************************************************************/
void printParallel(double darr[], string sarr[], int arraySize);

/******************************************************************************
 * main - starting point                                                      *
 ******************************************************************************/
int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];

    // range-based for loop to get user input
    for (double &item : firstArray)
    {
    	cout << "Input a decimal value : ";
    	cin >> item;
    }

    cout << firstArray[0] << endl;
    cout << firstArray[2] << endl;

    // declare second array
    string secondArray[SIZE];

    // for loop to get user input
    cin.ignore();
    for (int i = 0; i < 5; i++)
    {
    	cout << "Please enter the associated codeword for each observation: ";
    	getline(cin, secondArray[i]);
    }

    // function call
    printParallel(firstArray, secondArray, SIZE);

    // terminate
    return 0;
}

/******************************************************************************
 * Function Definition                                                        *
 ******************************************************************************/
void printParallel(double darr[], string sarr[], int arraySize)
{
	int i = 0;

    while (i < 5)
    {
    	cout << darr[i] << " " << sarr[i] << endl;
    	i++;
    }
}