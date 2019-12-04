
// this is an extremely simple program gives a user human-like communication
// with the system. It asks questions and delivers a greeting based on those 
// inputs. This is how a computer introduces itself to a human being

#include <iostream>
#include <string>

using namespace std ;
int main()
{
    // variable declaration

    string name;
    int age;
    
    // input requests

    cout << "Hello, what is your name?" << endl;
    cin >> name;
    
    cout << endl << "And what is your age?" << endl;
    cin >> age; 
    
    // output delivery

    cout << endl << "Nice to meet you " << name;
    cout << " (age " << age << ")";
    
    // program termination
    
    return 0;
}