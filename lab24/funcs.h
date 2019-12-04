#include "ADT.h"
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
***** FUNCTION PROTOTYPES
*******************************************************************************/

bool openFile(fstream&, string, Mode);
void writeData(fstream&);
void readData(fstream&);
string convert(Mode);
