
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    // seed the random generator using the current time
    srand(time(0));

    // declare and initialize variables
    const int MIN = 1, MAX = 20;
    int randomNum = rand() % (MAX - MIN + 1) + MIN;
    int guess = 0, numTries = 0;

    // introductory message
    cout << "Welcome to my random number guessing game!\n";
    cout << "My program will generate a random number between ";
    cout << MIN << " and " << MAX << ".\n";
    cout << "You need to guess what that number is.\nGo!!!\n\n";

    // do-while loop to guess the random number
    do
    {
    	cout << "Guess the random number: " << endl;
    	cin >> guess;
    	numTries++;
    } while (guess != randomNum);

    // congratulate and terminate
    cout << "\nCongratulations, you got it right!\n";
    cout << "It took you " << numTries << " tries to guess correctly.\n";

    // performance assessment
    if (numTries <= 5 && numTries > 1)
    {
    	cout << "Pretty Good!";
    }
    else if (numTries == 1)
    {
    	cout << "Are you psychic!?!?";
    }
    else
    {
    	cout << "Pitful... *smh*";
    }

    return 0;
}