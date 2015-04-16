/*
 * This File Contains Some Additional Common Function
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */

#ifndef PRINT_H

// External Libraries

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

// Prototypes

void print ( ofstream &, stringstream &, bool only2file /* = false */ );
void print ( ofstream &, stringstream &);
void toupper_str ( string & );
string toupper_str_C ( string str );
void tolower_str ( string & );
string tolower_str_C ( string str );

#endif
