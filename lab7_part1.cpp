
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // display the menu
    cout << "Simple Menu:\n";
    cout << "\t1. Greeting\n";
    cout << "\t2. Validate Range\n";
    cout << "\t3. Division\n";
    cout << "\t4. Exit\n";

    // get the choice from the user
    int choice;
    cout << "Please enter your choice (1 - 4):\n";
    cin >> choice;

    // initial input validation
    if (choice < 1 || choice > 4)
    {
    	cout << "Please enter a valid choice (1 - 4):\n";
    	cin >> choice;
    }

    // choice 1 - greeting
    if (choice == 1)
    {
        string name;
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Hello, " << name << "! It's nice to meet you :)\n";
    }

    // choice 2 - validate range
    else if (choice == 2)
    {
        int target, low, high;

        cout << "This function will take a target number and the low/high bounds of\n"
        	 << "an inclusive range. It evaluates the inputs to determine if the target\n"
			 << "lies within the desired range (including the boundaries themselves)\n";

        cout << "Please enter a target number:\n";
    	cin >> target;

    	cout << "Please enter a lower boundary\n";
    	cin >> low;

    	cout << "Please enter an upper boundary\n";
    	cin >> high;

    	if (target >= low && target <= high)
    	{
    		cout << "Your number IS within that range";
    	}
    	else
    	{
    		cout << "Your number IS NOT within that range";
    	}
    }

    // choice 3 - division
    else if (choice == 3)
    {
        float dividend, divisor;

        cout << "This function will take a dividend and divisor and complete the\n"
        	 <<	"implied division operation. (Note: Do not enter 0 for either of these values,\n"
        	 << "zero is not a valid choice for this function.\n";

        cout << "Enter a dividend:\n";
        cin >> dividend;
        if (dividend == 0)
        {
        	cout << "You entered '0', please enter a different number:\n";
			cin >> dividend;
        }

        cout << "Enter a divisor:\n";
        cin >> divisor;
        if (divisor == 0)
        {
        	cout << "You entered '0', please enter a different number:";
        	cin >> divisor;
        }

        if (dividend == 0 || divisor == 0)
        {
        	cout << "You were already warned about entering '0'\n"
				 << "PROGRAM TERMINATED";
        	return 0;
        }
        else
        {
        	cout << "The resulting quotient is: " << (dividend / divisor) << "!";
        }
    }

    // choice 4 - exit
    else if (choice == 4)
    {
        cout << "Now exiting my program.\n";
    }

    // terminate
    return 0;
}