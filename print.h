/*
 * This File Contains Some Additional Common Function
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */

#ifndef PRINT_H
#define PRINT_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void print ( ofstream &, stringstream &, bool );
void toupper_str(std::string&);
string toupper_str_C(std::string str);
void tolower_str(std::string&);
string tolower_str_C(std::string str);

#endif
