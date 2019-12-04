#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // declare and initialize variables to hold user information
    int userAge = 0, userHours = 0;
    double userPayRate = 0.0;
    
    //prompt user for their age
    cout << "How old are you?\n";
    cin >> userAge;
    
    //prompt the user for their pay rate
    cout << "What is your hourly pay rate? (please record as a decimal)\n";
    cin >> userPayRate;
    
    //prompt the user for their hours worked
    cout << "How many hours did you work this week?\n";
    cin >> userHours;
    cout << endl;
    
    // math statements will go here
    cout << "Twice your age is "
         << userAge * 2
         << endl
         << endl;
    
    cout << "Half your age is "
         << userAge / 2
         << endl
         << endl;
    
    cout << "This week, you will earn $"
         << userPayRate * userHours
         << endl
         << endl;
    
    cout << "If you were awarded a $50 bonus, your new weekly pay would be $"
         << userPayRate * userHours + 50
         << endl
         << endl;
    
    cout << "If your pay were calculated exponentially, you would earn $"
         << pow(userPayRate, userHours)
         << endl
         << endl;
    
    return 0;
}
