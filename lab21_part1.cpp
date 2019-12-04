
#include <iostream>
#include <string>
using namespace std;

// structure definition for an Item
struct Item
{
	string name;
	int rating;
	string comment;
};

void set_items(Item[], int);

int main()
{
    // create an Item array of size 5
	const int SIZE = 5;
	Item item_group[SIZE];

    // user-initialization for loop
	set_items(item_group, SIZE);

    // range-based for loop to print
	int counter = 1;

	for (Item element : item_group)
	{


		cout << "--.ITEM " << counter << ".--" << endl;
		cout << "Title: " << element.name << endl;
		cout << "Rating: " << element.rating << endl;
		cout << "Comment: " << element.comment << endl << endl;

		counter++;
	}

    // terminate
    return 0;
}

void set_items(Item arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "--.ENTRY " << i + 1 << ".--" << endl;

		cout << "Please enter the title:" << endl;
		getline(cin, arr[i].name);

		cout << "Please enter your rating:" << endl;
		cin >> arr[i].rating;
		cin.ignore();

		cout << "Enter any comments you wish to include: " << endl;
		getline(cin, arr[i].comment);

		cout << "Entry " << i + 1 << " Complete!" << endl << endl;
	}
}