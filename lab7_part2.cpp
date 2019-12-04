
#include <iostream>
using namespace std;

int main()
{
    // get the user's choice
    char letter;
    cout << "Enter a letter between a and e: \n";
    cin >> letter;

    // use a switch to branch
    switch (letter)
    {
        // letter cases
    	case 'a': cout << "The Earth is round\n";
          break;

        case 'b': cout << "The sky is blue\n";
          break;

        case 'c': cout << "Hydrogen is a component of water\n";
          break;

        case 'd': cout << "Steel is a refined form of iron\n";
          break;

        case 'e': cout << "Copper is a good conductor of electricity\n";
          break;

        // invalid input
        default:
            cout << "Not a valid entry!\n";
    }

    // terminate
    return 0;
}