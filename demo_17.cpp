
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

//empty vector
vector<int> vec1;

// size 10
vector<int> vec2(10, 81);

// initial values
vector<int> vec3{1, 9, 5, 6, 3, 6, 8};

// outputs
cout << vec1[4] << endl;

// cout << vec1.at(4) << endl;

cout << vec2[8] << endl;

return 0;
}