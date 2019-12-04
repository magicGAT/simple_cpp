
#include <iostream>
#include <string>
using namespace std;

/*****************************
*     function prototypes    *
*****************************/
void mystery(short x, short y, short& result);
void mystery(int x, int y, int& result);
void mystery(float x, float y, float& result);
void mystery(double x, double y, double& result);
void mystery(string x, string y, string& result);

/*****************************
*       starting point       *
*****************************/
int main() {
    // call short version
    short a = 0;
    mystery(static_cast<short>(10), static_cast<short>(3), a);
    cout << "Result: " << a << endl;

    // call int version
    int b = 0;
    mystery(9, 12, b);
    cout << "Result: " << b << endl;
    mystery(12, 9, b);
    cout << "Result: " << b << endl;

    // call float version
    float c = 0.f;
    mystery(3.24f, 9.f, c);
    cout << "Result: " << c << endl;

    // call double version
    double d = 0.0;
    mystery(14.1, 9.51406, d);
    cout << "Result: " << d << endl;
    mystery(0.0, -0.54, d);
    cout << "Result: " << d << endl;
    mystery(-4.0, 4.0, d);
    cout << "Result: " << d << endl;

    // call string version
    string e = "";
    mystery("ghosts!", "mummies", e);
    cout << "Result: " << e << endl;
    mystery("Geese Like", "To Steal Things", e);
    cout << "Result: " << e << endl;

    // terminate
    return 0;
}

/*****************************
*  function implementations  *
*****************************/
void mystery(short x, short y, short& result) {
    cout << "short mystery invoked!" << endl;
    result = x +y;
}

void mystery(int x, int y, int& result) {
	cout << "integer mystery invoked!" << endl;
	if (x < y)
		result = x - y;
	else if (y < x)
		result = 0;
}

void mystery(float x, float y, float& result) {
	cout << "floating point mystery invoked!" << endl;
	result = (x * 2.5) + (y / 12.15);
}

void mystery(double x, double y, double& result) {
	cout << "double precision, floating point mystery invoked!" << endl;
	if (x > 0)
		result = y;
	else if (y < 0)
		result = x;
	else
		result = (2 * x) + y;
}

void mystery(string x, string y, string& result) {
    cout << "string mystery invoked!" << endl;
    if (x.length() == y.length())
    	result = "";
    else
    	result = x + " " + y;
}