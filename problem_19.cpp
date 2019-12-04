#include <iostream>

using namespace std;

int main()
{
    // variable declaration
    
    short x, y, z;
    
    // value collection and display
    cout << "Please enter 3 integers between -32,000 and 32,000, they MUST be seperated by spaces" << endl;

    cin >> x >> y >> z;
    
    cout << x << " " << y << " " << z << endl;
    
    // declaration, calculation and display of sum
    int sum = x + y + z;
    
    cout << x << " + " << y << " + " << z << " = " << sum << endl;
    
    return 0;
}