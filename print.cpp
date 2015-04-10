/*
 * This File Contains Some Additional Common Function
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */

#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "print.h"
using namespace std;

// This "print_file" function Prints Messages on Files and Terminal. Message Is of String Type.

void print_file ( string message, ofstream & ofs ) {
    ofs << message << flush;
    cout << message << flush;
    return;
}
