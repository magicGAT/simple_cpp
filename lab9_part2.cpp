
#include <iostream>
#include <string>

using namespace std;

int main() {
    // declare and initialize variables
    char resp = 'y';
    int total = 120;

    // initial prompt and gather
    cout << "The numbers '1' through '15' have been added and their sum's saved..."
    	 << endl
		 << endl;

    // nested loops
    while (resp == 'y' || resp == 'Y')
    {
    	cout << "Current Sum: " << total << endl;
        cout << "Would you like to repeat this process and add it to your total?" << endl
             << "(enter y or Y to continue, other inputs will count as 'no')" << endl;
        cin >> resp;

        if (resp != 'y' && resp != 'Y')
        	break;

    	for (int adder = 0; adder <= 15; adder++)
    	{
    		total = total + adder;
    	}
    }

    // display the total sum
    cout << "Your total sum is " << total << "!" << endl;

    // terminate
    return 0;
}