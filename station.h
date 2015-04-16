/*
 * This File Contains Prototypes and Varibles of the Station Class
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */

// External Libraries

#ifndef STATION_H
#define STATION_H

#include <string>
#include <string.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdlib.h>
using namespace std;

// Defining Variables
// Long_period (L), Short_period (B), Broadband (H)

enum types_of_band { // Case Insensitive
    Long_period  = 1,
    Short_period = 2,
    Broadband    = 3
};

enum types_of_instrument { // Case Insensitive
    High_Gain,
    Low_Gain,
    Accelerometer
};

enum network_codes { // Case Sensitive
    CE, CI, FA, N, NP, WR
};

class station {
    public:
    
        // Set and Get 
        
        // Done by Philip
        string get_type_of_band_str ();
        bool set_type_of_band ( types_of_band );
        bool set_type_of_band ( string );
    
        // Done by Shima
        string get_type_of_instrument_str ();
        bool set_type_of_instrument ( types_of_instrument );
        bool set_type_of_instrument ( string );
    
        // Done by Amir
        string get_network_code_str ();
        bool set_network_code ( network_codes );
        bool set_network_code ( string );
    
        // Done by Philip
        string get_station_name () { return station_name; }
        bool set_station_name ( string );
    
        // Done by Shima
        string get_orientation () { return Orientation; }
        bool set_orientation ( string );

    private:
        network_codes       network_code;
        string              station_name;
        types_of_band       type_of_band;
        types_of_instrument type_of_instrument;
        string              Orientation;
};

// Other Functions

// Done by Amir
int network_code_enum ( string str_net_code );
int type_of_instrument_enum ( string str_type_of_inst );
int type_of_band_enum ( string str_type_of_band );
string type_of_inst_string ( types_of_instrument type_of_inst );
bool isok_type_of_band ( string );
bool isok_network_code ( string );
bool is_there_any_err ( station );

// Done by Shima
bool isok_Orientation ( string );
bool isok_station_code ( string );

#endif
