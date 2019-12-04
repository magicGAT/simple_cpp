
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// end of Lab 2

	char desired_grade;
    desired_grade = 'A';
    
    cout << "I want a letter grade of "
         << desired_grade
         << " in this lab activity!\n";
    
    char desired_score;
    desired_score = 95;

    cout << "I will work hard to get a grade of "
         << static_cast<int>(desired_score)
         << " in this course!\n";
    
    string fav_food, hate_food;
    
    fav_food = "noodles";
    hate_food = "cheese";
    
    cout << "My favorite food is "
         << fav_food
         << ", but I really dislike "
         << hate_food
         << ".\n";
    
    // practice floats with rectangle problem

    double length, width;
    
    length = 2.22;
    width = 3.33;
    
    cout << "The \"length\" of the rectangle is "
         << length
         << ".\n"
         << "The \"width\" of the rectangle is "
         << width
         << ".\n";
    
    // practice with boolean variables

    bool isAutumn = false;
    
    cout << isAutumn
         << endl;
    cout << "The size of the variable \"isAutumn\" is "
         << sizeof(isAutumn)
         << " byte(s).\n";
    
    // practice with arthimetic operators

    int x = 19, y = 5;
    int negx, negy, add, sub, mult, div, mod;
    
    negx = -x;
    negy = -y;
    add = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;
    mod = x % y;
    
    cout << "x = "
         << x
         << endl;
    
    cout << "y = "
         << y
         << endl;
    
    cout << "negx = "
         << negx
         << endl;
    
    cout << "negy = "
         << negy
         << endl;
    
    cout << "add = "
         << add
         << endl;
    
    cout << "sub = "
         << sub
         << endl;
    
    cout << "mult = "
         << mult
         << endl;
    
    cout << "div = "
         << div
         << endl;
    
    cout << "mod = "
         << mod
         << endl;
    
    // conclusion of main loop
         
    return 0;
}