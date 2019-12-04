#include "funcs.h"

using namespace std;

/*******************************************************************************
***** STARTING POINT
*******************************************************************************/

int main() {
    // variables
    fstream file;
    string  filename;
    int     tmp;
    Mode    fileMode;

    // get the filename from the user
    cout << "Enter the filename: ";
    getline(cin, filename);

    // display a menu for the enum conversions
    for (int i = 0; i < 3; i++) {
        cout << i << '\t';
        cout << convert(static_cast<Mode>(i)) << endl;
    }

    // get the file mode from the user (int representation)
    do {
        cout << "Enter the mode you wish to use (0, 1, or 2): ";
        cin >> tmp;
    } while (tmp < 0 || tmp > 2);
    fileMode = static_cast<Mode>(tmp);

    // try opening the file and branch on the mode
    if (openFile(file, filename, fileMode)) {
        if (fileMode == INPUT) {
            readData(file);
        }
        else {
            cin.ignore();
            writeData(file);
        }
    }
    else {
        cerr << "ERROR: file could not be opened!\n";
    }

    // close the file
    file.close();

    // terminate
    return 0;
}
