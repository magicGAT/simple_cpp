
#include <iostream>
using namespace std;

/*****************************
*     function prototype     *
*****************************/
int calculator(int x, int y, int choice);

/*****************************
*       starting point       *
*****************************/
int main() {
    // local variables
    int x = 10, y = 4;

    // function calls
    cout << "Result: " << calculator(x, y, 1) << endl;
    cout << "Result: " << calculator(x, y, 2) << endl;
    cout << "Result: " << calculator(x, y, 3) << endl;
    cout << "Result: " << calculator(x, y, 4) << endl;
    cout << "Result: " << calculator(x, y, 5) << endl;

    // terminate
    return 0;
}

/*****************************
*  function implementation   *
*****************************/
int calculator(int x, int y, int choice) {
    
    static int sharedNumber = 5;

    switch (choice)
    {
        case 1:
        {
            cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
            sharedNumber--;

            int sum = x + y;
            return sum;
        }
        case 2:
        {
            cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
            sharedNumber--;

            int diff = x - y;
            return diff;
        }
        case 3:
        {
            cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
            sharedNumber--;

            int product = x * y;
            return product;
        }
        case 4:
        {
            cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
            sharedNumber--;

            int quotient = x / y;
            return quotient;
        }
        case 5:
        {
            cout << "Current Value of 'Shared Number': " << sharedNumber << endl;
            sharedNumber--;

            int rem = x % y;
            return rem;
        }
        default:
            
            cout << "Invalid Input" << endl;
    }
}

