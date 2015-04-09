/*
 * This File Contains Prototypes and Varibles of the Station Class
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */
 
// External Libraries

#include <iostream>
#include <string>
using namespace std;

// Defined Libraries

#include "print.h"
#include "earthquake.h"

// Defining Variables

// Long_period (L), Short_period (B), Broadband (H)

// Case Insensitive
enum types_of_band {
    Long_period  = 1,
    Short_period = 2,
    Broadband    = 3
};

// Case Insensitive
enum types_of_instrument {
    High_Gain,
    Low_Gain,
    Accelerometer
};

// Case Sensitive
enum network_codes {
    CE, CI, FA, N, NP, WR
};

// not needed
enum Orientation {
    N, E, Z
};

#ifndef STATION_H
#define STATION_H
    
class station {
    
    public:
    
        // Set and Get 
        
        // Done by Philip
        string get_type_of_band_str();
        types_of_band get_type_of_band() { return type_of_band; }
        bool set_type_of_band(types_of_band);
        bool set_type_of_band(string);
    
        // Done by Shima
        string get_type_of_instrument_str();
        types_of_instrument get_type_of_instrument() { return type_of_instrument; }
        bool set_type_of_instrument(types_of_instrument);
        bool set_type_of_instrument(string);
    
        // Done by Amir
        string get_network_code_str();
        network_codes get_network_code() { return network_code; }
        bool set_network_code(network_codes);
        bool set_network_code(string);
    
        // Done by Philip
        string get_station_name() { return station_name; }
        bool set_station_name(string);
    
        // Done by Shima
        string get_orientation() { return Orientation; }
        bool set_orientation(string);
 

        // Other Functions
        
        // Done by Amir
        int network_code_enum(string str_net_code);
        int type_of_instrument_enum(string str_type_of_inst);
        int type_of_band_enum(string str_type_of_band);
        string type_of_inst_string(types_of_instrument type_of_inst);
        
        // Done by Shima
        bool isok_Orientation(string);
        bool isok_type_of_instrument(string);
        bool isok_type_of_band(string);
        bool isok_station_code(string);
        bool isok_network_code(string);
        bool is_there_any_err(station);

    private:
        network_codes       network_code;
        string              station_name;
        types_of_band       type_of_band;
        types_of_instrument type_of_instrument;
        string              Orientation;

};
