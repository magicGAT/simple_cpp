/*
FINAL PROJECT MAPPING AND MAIN FUNCTION
*/

// INCLUDE STATEMENTS
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

// main function
int main()
{
	User my_user;
	greeter(my_user&); // make sure this syntax is correct

	what other variable need to be accessible to all other functions?
	// MAIN MENU (should it send you a semi random greeting 
	// based on name and then a random joke?)

	// greeting/load a profile (perhaps include a couple of sample profile for demo purposes)

	// option 1: JOURNAL AN ENTRY 
	// how can we enfore that a users new activity/expenditure objects will match exisiting ones
	// to prevent massive failure from simple typos (a function that compares strings and asks the
	// user if they are the same in the event of minor char differences?)

	// option 2: READ AN ENTRY

	
	// option 3: MAKE PROJECTIONS (interesting design decision... should there be any automation
	// to the process based on profile? Should my profile keep a standing count of how many hours
	// I have in my favored activity, or should it all be file based when I access this part of the
	// program? Probably depends largely on the speed of file I/O and processing)

	// option 4: about/help

	// option 5: readme for testing/demo purposes 
	return 0; 
}