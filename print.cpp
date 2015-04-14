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

// This "print" function Prints Messages on Files and Terminal. Message Is of Stringstream Type.

void print(ofstream & o, stringstream & txt, bool only2file) {
    
    cout.precision ( 3 );
    o.precision ( 3 );
    
    if ( !only2file ) cout << txt.str ();
    
    o << txt.str ();
    
    txt.str ( string ());
    txt.clear ();
}

// These Functions Are for Changing to Uppercase

void toupper_str ( string & str ) {
    
    for ( size_t i = 0; i < str.size (); ++i )
        str[i] = toupper ( str[i] );
    
}

string toupper_str_C ( string str ) {
    
    toupper_str(str);
    
    return str;
}

// These Functions Are for Changing to Lower Case

void tolower_str ( string & str ) {

    for ( size_t i = 0; i < str.size (); ++i )
        str[i] = tolower( str[i] );
}

string tolower_str_C ( string str ) {

    tolower_str ( str );
    return str;
}


