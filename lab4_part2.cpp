#include <iostream>
using namespace std;

int main()
{
    //declare and initialize variables
    char ascii = 33;
    short x = -12000;
    int y = 33000;
    double z = 100.313;
    
    // output conversion statements
    cout << "The character, " << ascii << ", has ASCII value of " << static_cast<long>(ascii) << endl;
    cout << "The short, " << x << ", converted to an int is " << static_cast<int>(x) << endl;
    cout << "The int, " << y << ", converted to a short is " << static_cast<short>(y) << endl;
    cout << "The double, " << z << ", converted to a long long is " << static_cast<long long>(z) << endl;
    
    //output their value
    cout << "Value of ascii: " << ascii << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;
    
    // combined assignment statements
    ascii += 10;
    x -= 174;
    y *= 5;
    z /= 6.54;
    
    // output their values
    cout << "Value of ascii: " << ascii << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;
    
    return 0;
}
