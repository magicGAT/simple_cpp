
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int navigator;

	// main loop (program terminates when 3 is entered as input
	while (navigator != 3)
	{
		// menu prompt
		cout << "Welcome to 'Greg's Game Review File Utility'!" << endl;
		cout << "1) Write to File" << endl;
		cout << "2) Read from File" << endl;
		cout << "3) Exit" << endl;

		cin >> navigator;
		cin.ignore();

		// input validation
		if (navigator > 3 || navigator < 1)
		{
			cout << "Invalid!" << endl;
		}
		// Write Data to a File
		else if (navigator == 1)
		{
			string to_open;

			cout << "Please give this file a name (must end with .txt)" << endl;
			getline(cin, to_open);

			ofstream outputFile(to_open);

			if (!outputFile)
			{
				cerr << "File opening error" << endl;
				return 1;
			}

			string o_title, o_comments, o_score;

			cout << "Input title:" << endl;
			getline(cin, o_title);
			
			cout << "Score:" << endl;
			getline(cin, o_score);

			cout << "Comments?" << endl;
			getline(cin, o_comments);

			outputFile << o_title << endl;
			outputFile << o_score << endl;
			outputFile << o_comments;

			outputFile.close();
			cout << "Review Successfully Generated!" << endl << endl;
		}
		// Read File
		else if (navigator == 2)
		{
			cout << "Please input the name of the file:" << endl;
			string target_file;

			getline(cin, target_file);

			ifstream inputFile(target_file);

			string i_title, i_score, i_comments;

			while (!inputFile.fail())
			{
				getline(inputFile, i_title);
				getline(inputFile, i_score);
				getline(inputFile, i_comments);

				cout << "Title: " << i_title << endl;
				cout << "Score: " << i_score << endl;
				cout << "Comments: " << i_comments << endl << endl;

				break;
			}

			char gate = 'd';

			while (gate != 'c')
			{
				cout << "Enter c to continue" << endl;
				cin >> gate;
				cin.ignore();
				
				// I dont know why but I had to add this to avoid an infinite loop (?)
				if (gate == 'c')
					break;
			}
			inputFile.close();
			cout << endl << endl;

		}
	}
	//termination
	cout << "See you next time!" << endl;

	return 0;
}