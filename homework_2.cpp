
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

// This program simulates a game of 'mad libs'. Users are presented with a story frame
// and then asked to input words of particular grammatical types. These words, as well
// as randomly generated numbers, are then inserted into the frame resulting in a customized
// and often humorous story.

int main()
{
	// display template
	cout << "Welcome to Greg's Word Game! This  is the template :\n\n";
	cout << "Today I, NAME, went to the zoo. I saw an ADJECTIVE\n";
	cout << "NOUN jumping up and down. It VERB through the \n";
	cout << "large tunnel that led to its ADJECTIVE NOUN. I\n";
	cout << "also fed NUMBER NOUN to a NOUN. At the gift shop,\n";
	cout << "I brought NUMBER NOUN to a NOUN. At the gift shop,\n";
	cout << "I bought NUMBER NOUN that looked really\n";
	cout << "ADJECTIVE. It was a fun day!\n\n";

	// variable declarations
	string name, noun_1, noun_2, noun_3, noun_4,
		   noun_5, noun_6, noun_7, adj_1, adj_2,
		   adj_3, verb;

	int num_1, num_2, num_3;

	// input prompts and collections
	cout << "Choose any name:" << endl;
	getline(cin, name);

	cout << "Choose any adjective:" << endl;
	getline(cin, adj_1);

	cout << "Choose a noun:" << endl;
	getline(cin, noun_1);

	cout << "Choose a verb and put it in the past tense:" << endl;
	getline(cin, verb);

	cout << "Choose another adjective:" << endl;
	getline(cin, adj_2);

	cout << "Choose another noun: " << endl;
	getline(cin, noun_2);

	cout << "Choose yet another noun, and put it in plural form:" << endl;
	getline(cin, noun_3);

	cout << "Choose yet ANOTHER noun:" << endl;
	getline(cin, noun_4);

	cout << "Once again, choose a noun and make it plural:" << endl;
	getline(cin, noun_5);

	cout << "Choose a penultimate noun (almost there!!!):" << endl;
	getline(cin, noun_6);

	cout << "Choose one more, final and pluralized, noun:" << endl;
	getline(cin, noun_7);

	cout << "Choose a final adjective:" << endl;
	getline(cin, adj_3);

	// random number generation
	srand(time(0));
	num_1 = rand() % (23 - 5) + 5;
	num_2 = rand() % (23 - 5) + 5;
	num_3 = rand() % (23 - 5) + 5;

	// story output
	cout << "Today I, " << name << ", went to the zoo. I saw a/an " << adj_1 << "\n";
	cout << noun_1 << " jumping up and down. It " << verb << " through the \n";
	cout << "large tunnel that led to its " << adj_2 << " " << noun_2 << ". I\n";
	cout << "also fed " << num_1 << " " << noun_3 << " to a " << noun_4 << ". At the gift shop,\n";
	cout << "I brought " << num_2 << " " << noun_5 << " to a " << noun_6 << ". At the gift shop,\n";
	cout << "I bought " << num_3 << " " << noun_7 << " that looked really\n";
	cout << adj_3 << ". It was a fun day!\n\n";

	// program termination
	return 0;
}