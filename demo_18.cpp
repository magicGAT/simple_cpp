
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

//empty vector
if (vec1.empty())
{
	cout << "The vector is empty!\n"
}

vector<string> vec1;
vec1.push_back("Pablo Kiwalski");
cout <<  vec1.back() << endl; 
vec1.push_back("Halloween Joe");
cout << vec1.back() << endl;
vwc1.pop_back() << endl;
cout << vec1.size() << endl;

if (vec1.empty())
{
	cout << "The vector is empty!\n"
}

// size 10
vector<int> vec2(10, 81);
for (int i = 0; i < vec2.size(); i++)
{
	cout << "Enter a number: " << endl;
	cin >> vec2.at(i);
}

for (element : vec2)
{
	cout << elem << endl;
}

// initial values
vector<int> vec3{1, 9, 5, 6, 3};

// outputs
cout << vec1[4] << endl;
// cout << vec1.at(4) << endl;

cout << vec2[8] << endl;
cout << vec2.at(3) << endl;
cout << vec3.at(0) << endl;

return 0;
}