/*
 * This File Contains Prototypes and Varibles of the Earthquake Class
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */
 
#ifndef EARTHQUAKE_H
#define EARTHQUAKE_H

// External Libraries

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include "station.h"
#include <list>
using namespace std;

// Defined Libraries

#include "print.h"
#include "station.h"
#include <list>


// Variable Definition

//string mnth_enum2str ( months mnth );

enum months {
    January, February, March, April, May, June,
    July, August, September, October, November, December
};

// Case Insensitive

enum magnitude_type {
    ML, Ms, Mb, Mw
};

// Class Definition
    
class earthquake {
    
    public:
    
        // Variables

        string id;
        string date;
        string time;
        string tz;
        string earthquake_name;

        vector<station> stations;
        int valid, invalid, sign;
    
        // Set and Get Functions
        
        //Done by Amir
        double get_lat() { return lat; }
        void set_lat ( double );
        void set_lat ( string );
    
       // Done by Philip
        double get_lon () { return lon; }
        void set_lon ( double );
        void set_lon ( string );
    
        // Done by Shima
        double get_elv () { return elv; }
        void set_elv ( double );
        void set_elv ( string );
    
        //Done by Amir
        double get_ms () { return ms; }
        void set_ms ( double );
        void set_ms ( string );
    
        // Done by Philip
        double get_magnitude () { return magnitude; }
        void set_magnitude ( double yr );
        void set_magnitude ( string day );
    
        // Done by Shima
        magnitude_type get_magnitude_Type () { return magnitude_Type; }
        string get_magnitude_Type_str ();
        void set_magnitude_Type ( string );
        void set_magnitude_Type ( magnitude_type );
    
        // Done by Amir
        int get_year () { return yr; }
        void set_year ( int );
        void set_year ( string );
    
        // Done by Philip
        int get_day () { return day; }
        void set_day ( int );
        void set_day ( string );
    
        // Done by Shima
        int get_hour () { return hr; }
        void set_hour ( int );
        void set_hour ( string );
    
        // Done by Amir
        int get_min () { return min; }
        void set_min ( int );
        void set_min ( string );
    
        // Done by Philip
        int get_sec () { return sec; }
        void set_sec ( int );
        void set_sec ( string );
    
        // Done by Shima
        months get_month () { return month; }
        string get_month_str ();
        void set_month ( string );
        void set_month ( months );
    
        // Done by Amir
        int set_dt ( string str2, ofstream & log );
        int set_mag ( string lm, ofstream & log );

    private:
        months month;
        magnitude_type magnitude_Type;
        double lat;
        double lon;
        double elv;
        int    yr;
        int    day;
        int    hr;
        int    min;
        int    sec;
        double ms;
        double magnitude;
};

int str2int ( const string & str );
months mnth_str2enum ( string mnth );
//void print( ofstream &, stringstream &, bool only2file = false );

vector<string> & split ( const string & s, char delim, vector<string> & elems );
vector<string> split ( const string & s, char delim );

#endif
