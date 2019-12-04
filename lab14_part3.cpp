

#include <iostream>
using namespace std;

/*****************************
*     function prototype     *
*****************************/
void calculator(int x = 17, int y = 3, int choice = 1);

/*****************************
*       starting point       *
*****************************/
int main() {
    // local variables
    int x = 6, y = 24;

    //function calls
    calculator();
    calculator(x, y, 2);
    calculator(6);
    calculator(17, y, 3);
    calculator(6, y, 5);

    // terminate
    return 0;
}

/*****************************
*  function implementation   *
*****************************/
void calculator(int x, int y, int choice) {
    switch (choice)
    {
        case 1:
        {
            int sum = x + y;
            cout << x << " " << "+" << " " << y << " = " << sum << endl;
            break;
        }
        case 2:
        {
            int diff = x - y;
            cout << x << " " << "-" << " " << y << " = " << diff << endl;
            break;
        }
        case 3:
        {
            int product = x * y;
            cout << x << " " << "*" << " " << y << " = " << product << endl;
            break;
        }
        case 4:
        {
            int quotient = x / y;
            cout << x << " " << "/" << " " << y << " = " << quotient << endl;
            break;
        }
        case 5:
        {
            int rem = x % y;
            cout << x << " " << "%" << " " << y << " = " << rem << endl;
            break;
        }
        default:
           
            cout << "Invalid Input" << endl;
	}
}