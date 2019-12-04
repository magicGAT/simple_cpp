#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int scores[SIZE] = {8, 2, 6, 9, 10};
	int second[SIZE] = {1, 2, 3, 4, 5};

//	second = scores;
	for (int i = 0; i < SIZE; i++) {
		second[i] = scores[i];
	}
	for (int element : second) {
		cout << element << " ";
	}


	/*for (int& element : scores) {
		cout << "Enter a number: ";
		cin >> element;
	}

	for (int element : scores) {
		cout << element << " ";
	}*/


	/*for (int i = 0; i < SIZE; i++) {
		cout << scores[i] << " ";
	}*/


	/*for (int i = 0; i < SIZE; i++) {
		cout << "Enter a number: ";
		cin >> scores[i];
		cout << scores[i] << endl;
	}
	int i = 10;
	if (i >= 0 && i < SIZE)
		cout << scores[i];
	cout << "hello?" << endl;*/

	return 0;
}