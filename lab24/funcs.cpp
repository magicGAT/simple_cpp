
#include "funcs.h"

/*******************************************************************************
***** FUNCTION DEFINITIONS
*******************************************************************************/

bool openFile(fstream& file, string filename, Mode m)
{
	switch (m)
	{
	case INPUT:
		file.open(filename, ios::in);
		break;
	case OUTPUT:
		file.open(filename, ios::out);
		break;
	case APPEND:
		file.open(filename, ios::app);
		break;
	}

	if (file.fail())
		return false;
	else
		return true;
}

void writeData(fstream& file)
{
	char flag = 'Y';
	string content;
	while (flag == 'Y')
	{
		cout << "Please enter line a line of the file data:" << endl;
		getline(cin, content);

		file << content << endl;

		cout << "Continue entry? (enter 'y'/'Y' to continue)" << endl;
		cin >> flag;
		cin.ignore();

		flag = toupper(flag);
	}

	file.close();
}

void readData(fstream& file)
{
	string content;

    while (!file.eof())
    {
    	getline(file, content);
    	cout << content << endl;
    }

    file.close();
}

string convert(Mode m)
{
	string output;

	switch(m)
	{
		case INPUT:
		{
			output = "INPUT";
			break;
		}
		case OUTPUT:
		{
			output = "OUTPUT";
			break;
		}
		case APPEND:
		{
			output = "APPEND";
			break;
		}
	}

	return output;
}




