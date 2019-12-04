#include <iostream>
using namespace std;

/*****************************
*       global variable      *
*****************************/
int sharedNumber = 5;

/*****************************
*     function prototypes    *
*****************************/
int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int mod(int x, int y);

/*****************************
*       starting point       *
*****************************/
int main() {
    // local variables
    int x = 10, y = 4;

    // function calls
    cout << "Result: " << addition(x, y) << endl;
    cout << "Result: " << subtraction(x, y) << endl;
    cout << "Result: " << multiplication(x, y) << endl;
    cout << "Result: " << division(x, y) << endl;
    cout << "Result: " << mod(x, y) << endl;

    // terminate
    return 0;
}

/*****************************
*  function implementations  *
*****************************/
int addition(int x, int y)
{
    cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
    sharedNumber--;

    int sum = x + y;
    return sum;
}

int subtraction(int x, int y)
{
    cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
    sharedNumber--;

    int diff = x - y;
    return diff;
}

int multiplication(int x, int y)
{
    cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
    sharedNumber--;

    int product = x * y;
    return product;
}

int division(int x, int y)
{
    cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
    sharedNumber--;

    int quotient = x / y;
    return quotient;
}

int mod(int x, int y)
{
    cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
    sharedNumber--;

    int rem = x % y;
    return rem;
}