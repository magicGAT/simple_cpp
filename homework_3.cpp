
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//main menu
	char choice;

	cout << "Welcome to Greg's Geometry Toolkit (GGT)" << endl;
	cout << "Please select from the following functions:" << endl;
	cout << "a) Calculate the Area of Circle!\n"
		 << "b) Calculate the Area of Rectangle!\n"
		 << "c) Calculate the Area of a Triangle!\n"
		 << "d) Leave\n";
	cin >> choice;

	switch (choice)
	{

	// area of a circle
		case 'a':
		{
			const double PI = 3.14159;
			double radius, c_area;

			cout << "Circle Function" << endl;
			cout << "Please input the radius of the circle (up to 4 decimals of precision):" << endl;
			cin >> radius;

			if (radius < 0)
			{
				cout << "Impossible Value Detected" << endl;
				break;
			}
			else
			{
				c_area = PI * (pow(radius, 2));
				cout << "pi * " << radius << "^2 = " << c_area << endl;
				cout << "The area of your circle is: " << c_area << "!" << endl;

				break;
			}
		}

	// area of a rectangle
		case 'b':
		{
			double r_height, width, r_area;

			cout << "Rectangle Function" << endl;
			cout << "Please input the height of the rectangle (up to 4 decimals of precision):" << endl;
			cin >> r_height;
			cout << "Please input the width of the rectangle (up to 4 decimals of precision):" << endl;
			cin >> width;

			if (r_height < 0 || width < 0)
			{
				cout << "Impossible Value Detected" << endl;
				break;
			}
			else
			{
				r_area = width * r_height;
				cout << r_height  << " * " << width << " = " << r_area << endl;
				cout << "The area of your rectangle is: " << r_area << "!" << endl;

				break;
			}
		}
	// area of a triangle
		case 'c':
		{
			double base, t_height, t_area;

			cout << "Triangle Function" << endl;
			cout << "Please input the size of the base of the triangle (up to 4 decimals of precision):"
				 << endl;
			cin >> base;
			cout << "Please input the height of the triangle (up to 4 decimals of precision):"
				 << endl;
			cin >> t_height;

			if (base < 0 || t_height < 0)
			{
				cout << "Impossible Value Detected" << endl;
				break;
			}
			else
			{
				t_area = .5 * (t_height * base);
				cout << ".5(" << base << " * " << t_height << ") = " << t_area << endl;
				cout << "The area of your triangle is: " << t_area << "!" << endl;

				break;
			}
		}
	// leave
		case 'd':
		{
			cout << "Okay, maybe next time, bye!" << endl;

			break;
		}
	// other inputs
		default:
		{
			cout << "That is not a valid selection" << endl;
		}

	}
	// program termination

	return 0;
}