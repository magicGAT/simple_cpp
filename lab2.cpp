
// this program gather preference information from user's and present them as a report. this 
// can be useful in categorizing users in a volutary fashion and learning about what they
// find compelling accross a number of categories

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // variable declarations

    string name, fav_movie, fav_color, fav_art, fav_animal, dob;

    int fav_num, age;

    // data gathering/variable assignments

    cout << "What is your name?" << endl;
    cin >> name;

    cout < "What is your age?" << endl;
    cin >> age;

    cout << "What is your date of birth? (mm/dd/yyyy)" << endl;
    cin >>  dob;

    cout << "What is your favorite movie?" << endl;
    cin >> fav_movie;

    cout << "What is you lucky number?" << endl;
    cin >> fav_num;

    cout << "What is your favorite color?" << endl;
    cin >> fav_color;

    cout << "What is your favorite artist, art style, or art piece?" << endl;
    cin >> fav_art;

    cout << "What is your favorite animal?" << endl;
    cin >> fav_animal;

    // preference report output

    cout << "Here is your personal preference report:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Favorite Number: " << fav_num << "\n";
    cout << "Favorite Movie: '" << fav_movie <<"'\n";
    cout << "Favorite Color: " << fav_color << "\n";
    cout << "Favorite Artist/Art Style/Piece: " << fav_art << "\n";
    cout << "Favorite Animal: " << fav_animal << "\n";
    cout << "Date of Birth: " << dob;

    // program termination
    
    return 0;
}

// possible improvements 
// 1) ask user if they would like to input multiple entries per category
// with yes or no 'if' statments
// or with a int input prior to actual variable assingments
// ex: 'How many favorite colors do you have?' 
// 2) implement soltions to extra whitespace inputs by user
// 3) improve dob system