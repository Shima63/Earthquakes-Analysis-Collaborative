/*
 * H8 Program
 * Earthquakes' Events Analysis
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */

// Defined Libraries

#include "earthquake.h"
#include "station.h"
#include "print.h"

// External Libraries

#include <stdlib.h>
#include <cstdlib> 
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <ctype.h>
#include <locale>
using namespace std;

// Global Variables


// ********************************************************************************************************************

// Function Prototype

void open_input ( ifstream & ); // Done by Amir
void open_file ( string, ofstream & ); // Done by Philip
void read_header(ifstream & in, ofstream & log); // Done by Shima
void read_data(ifstream & in, ofstream & out, ofstream & log); // Done by Amir
void process(ifstream & ifile, ofstream & log); // Done by Philip


// ********************************************************************************************************************

// Main Program.
// Return Zero on Success, Non-Zero in case of Failure.

int main() {

    
    return 0;
}

// ********************************************************************************************************************

// Functions
