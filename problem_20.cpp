
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 4, y = 1, result;
    
    while (x <= 5 || y >= 0)
    {
        cout << "Please two numbers. The first number must"
        << "be greater than 5 and the second less than 0. Also, the sum of"
        << "the first number cubed and the second number squared must be greater than 100!"
        << endl;
        
        cout << "CHALLENGE INITIATED" << endl;
        
        cin >> x >> y;
    }
    
    result = pow(x, 3) + pow(y, 2);
    
    if (result >= 100)
    {
        cout << "Passed! Result: " << result << endl;
    }
    else
    {
        cout << "No good...";
    }
    
    return 0;
}