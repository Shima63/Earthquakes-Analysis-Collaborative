/*
 * This File Contains Functions of the Station Class
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */
 
#include "station.h"  
#include "earthquake.h"

int type_of_band_enum(string str_type_of_band) {
    
    str_type_of_band = toupper_str_C(str_type_of_band);
    toupper_str(str_type_of_band);
    
    if (str_type_of_band == "LONG-PERIOD")
        return 0;
    if (str_type_of_band == "SHORT-PERIOD")
        return 1;
    if (str_type_of_band == "BROADBAND")
        return 2;
    return -1;
}

bool isok_type_of_band(string str){
    
    // Type of band: Case insensitive and only One word. Can be of the following
    // to be valid 
    // string type_of_band;
    types_of_band t = (types_of_band)type_of_band_enum(str);
    if (t<0 || t>2) return false;
    return true;
}

bool station::set_type_of_band(types_of_band a){
    try
    {
        type_of_band = a;
        return true;
    }
    catch (int e)
    {
        //cout << "Value of station name is invalid" << e << endl;
        return false;
    }
}
bool station::set_type_of_band(string a){
    try
    {
        if (!isok_type_of_band(a))
            throw (51);
        else
            type_of_band = (types_of_band)type_of_band_enum(a);
        return true;
    }
    catch (int e)
    {
        //cout << "Value of station name is invalid" << e << endl;
        return false;
    }
}

bool station::set_station_name(string a) {
    try
    {
        if (!isok_station_code(a))
            throw (51);
        else
            station_name = a;
        return true;
    }
    catch (int e)
    {
        //cout << "Value of station name is invalid" << e << endl;
        return false;
    }
}

bool isok_network_code(string str){

    if (str.size() == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            if (!isalpha(str[i]))
                return false;
            if (!isupper(str[i]))
                return false;
        }
        // if return true, means everything is fine
        return true;
    }
    return false;
}

string network_codes_str[5] = { "CE", "CI", "FA", "NP", "WR" };
string station::get_network_code_str(){
    return network_codes_str[network_code];
}

bool station::set_network_code(network_codes network_codes_value){
    try
    {
        network_code = network_codes_value;
        return true;
    }
    catch (int e)
    {
        //cout << "Value of station name is invalid" << e << endl;
        return false;
    }
}

bool station::set_network_code(string network_codes_value){
    try
    {
        if (!isok_network_code(network_codes_value))
            throw (51);
        else
            network_code = (network_codes)network_code_enum(network_codes_value);
        return true;
    }
    catch (int e)
    {
        //cout << "Value of station name is invalid" << e << endl;
        return false;
    }
}

string types_of_band_strf[3] = { "Longperiod", "Shortperiod", "Broadband" };
string types_of_band_str[3] = { "L", "B", "H" };
char types_of_band_char[3] = { 'L', 'B', 'H' };
string station::get_type_of_band_str(){
    return types_of_band_str[type_of_band];
}
