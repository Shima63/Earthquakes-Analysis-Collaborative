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

ofstream     log;
stringstream str;

// ********************************************************************************************************************

// Function Prototype

int open_input   ( ifstream &, string, ofstream & );                   // Done by Amir
int open_output  ( ofstream &, string );                               // Done by Philip
int read_header  ( ifstream &, ofstream &, earthquake & );             // Done by Shima
int read_data    ( ifstream &, ofstream &, ofstream &, earthquake & ); // Done by Amir
int process      ( ifstream &, ofstream &, earthquake & );             // Done by Philip
int process_file ( string );                                           // Done by Shima

// ********************************************************************************************************************

// Main Program.
// Return Zero on Success, Non-Zero in case of Failure.

int main ( int argc, char * argv[] ) { // Able to Get Multiple Input Files
    
    // Local Variable Definition
    
    string arg;
    int i, err;

    // Preparing the Log File Which Is for All the Input Files

    open_output(log, "myprogram.log");
    
    // For Loop Untill There Is No Other Input File.

    for ( i = 1; i < argc; i++ ) {
        arg = argv [i] ;
        cout << endl << "Processing input file: " << arg << endl;
        
        // Function for Doing the Process on Each Input File and Return the Result of Being Successful or Not.
        
        err = process_file ( arg );
        if ( !err ) {
            cout << "Finished " << arg << endl;
        }    
        else {
            cout << "Error in " << arg << endl;
        }    
    }

    print(log, str);

    // Closing the Open Files
    
    if ( log.is_open() ) {
        log.close();
    }    
    cout << "Finished all!" << endl;
    
    return 0;
}

// ********************************************************************************************************************

// Functions

// This open_input Function Is Openning the Input Files and Is Checking for Their Sanity
int open_input(ifstream & ifile, string ifilename, ofstream & log) {
    // Sanity check on the file stream
    
    ifile.open(ifilename.c_str());
    if (!ifile.is_open()) {
        stringstream str;
        str << "Error! Cannot open input file: " << ifilename << endl;
        print(log, str);
        return -1;
    }
    
    return 0;
}

// This open_output Function Is Openning the OUTput and Log Files and Is Checking for Their Sanity
int open_output(ofstream & o, string ofilename) {
    
    // Print on output file
    o.open(ofilename.c_str());
    if (!o.is_open()) {
        cout << "Error! The output file: " + ofilename + " is locked\n";
        return -1;
    }
    
    return 0;
}
// This read_header Function Is Openning the Input Files and Is Checking for Their Sanity

int read_header ( ifstream & in, ofstream & log, earthquake & EQ ) {
    
    // Variable Definition
    
    string lID, ldt, lnam, lm, eID, ID, dt, nam, geo, tm, tz, magnitude_type;
    int err = 0;
    stringstream str;
    
    // Getting Information about Time and Date
    
    getline ( in, lID );
    getline ( in, ldt );
    getline ( in, lnam );
    getline ( in, lm );
    
    // Checking for the Error

    err = EQ.set_dt ( ldt, log );
    if ( err ) {
        str << "error in setting date. error code: " << err << endl;
        return 10;
    }
    
    err = EQ.set_mag( lm, log );
    if ( err ) {
        str << "error in setting magnitude. error code: " << err << endl;
        return 11;
    }
    
    str << eID << endl;
    print ( log, str );
    str.clear();
    
    EQ.earthquake_name = lnam;
    EQ.id = lID;
    
    str << lnam << endl;
    print ( log, str, true );
    
    return 0;
}

// This read_data Function Is Getting the Earthquake Stations' Data

// This process Function Is Doing the Processing

// This Process_file Function Is Doing the Main Process of Producing Signals

int process_file ( string fn ) {
    
    // Vriable Definition
    
    ofstream     out;
    ifstream     in;
    int          err = 0;
    earthquake   EQ;
    
    // Checking the Sanity of Input File
    
    err = open_input ( in, fn, log );
    if ( err ) {
        str << "error in reading " << fn << " file. error code: " << err << endl;
        return err;
    }
    
    str << "Processing input..." << endl;
    print ( log, str );
    
    err = read_header ( in, log, EQ );
    if ( err ) {
        str << "error in proccessing header. error code: " << err << endl;
        return err;
    }
    
    str << "Header read correctly!" << endl << endl;
    print ( log, str );
    
    
    err = open_output ( out, fn+".out" );
    if ( err ) {
        str << "error in open output file. error code: " << err << endl;
        return err;
    }
    
    err = read_data ( in, out, log, EQ );
    if ( err ) {
        str << "error in reading data. error code: " << err << endl;
        return err;
    }
    
    err = process ( in, out, EQ );
    if ( err ) {
        str << "error in proccessing data. error code: " << err << endl;
        return err;
    }
    
    print ( out, str );
    
    str << endl << "Total invalid entries ignored: " << setw(2) << EQ.invalid
    << endl << "Total valid entries read: "      << setw(7) << EQ.valid
    << endl << "Total signals produced: "        << setw(9) << EQ.sign << endl;
    
    if ( in.is_open() ){
        in.close();
    }
    if ( out.is_open() ) {
        out.close();
    }
    
    return 0;
}

int open_output(ofstream & o, string ofilename) {
    
    // Print on output file
    o.open(ofilename.c_str());
    if (!o.is_open()) {
        cout << "Error! The output file: " + ofilename + " is locked\n";
        return -1;
    }
    
    return 0;
}


