
#include <iostream>
#include <string>
using namespace std;

// define the Rectangle structure
struct Rectangle {
    double length;
    double width;
};

// function prototypes
Rectangle createRect();
double calcArea(const Rectangle&);

// starting point
int main() {
    // create a Rectangle structure
    Rectangle rect = createRect();

    // calculate the area
    double area = calcArea(rect);

    // display the Rectangle's information
    cout << "Length: " << rect.length << endl;
    cout << "Width: "  << rect.width  << endl;
    cout << "Area: "   << area        << endl;

    // terminate
    return 0;
}

// TYPE YOUR CODE HERE
Rectangle createRect()
{
	Rectangle x;
	x.length = 0;
	x.width = 0;

	while (x.length <= 0)
	{
		cout << "Input rectangle length: ";
		cin >> x.length;
	}

	while (x.width <= 0)
	{
		cout << "Input rectangle width: ";
		cin >> x.width;
	}

	return x;
}


double calcArea(const Rectangle& x)
{
	double area = x.length * x.width;
	return area;
}