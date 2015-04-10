/*
 * This File Contains Functions of the Earthquake Class
 * By Amirhossein & Philip & Shima
 * April 2015
 * No Copyright
 * Github account: https://github.com/Shima63/Earthquakes-Analysis-Collaborative.git
 */
void earthquake::set_lon(double a) {
    try
    {
        if (a < -180 || a > +180)
            throw (22);
        else
            lon = a;
    }
    catch (int e)
    {
        cout << "Value of lon is invalid" << e << endl;
    }
}
void earthquake::set_lon(string a){
    try
    {
        int b = str2int(a);
        set_lon(b);
    }
    catch (int e)
    {
        set_lon(-1);
    }
}

void earthquake::set_magnitude(double a) {
    try
    {
        if (a < 0 || a > 12)
            throw (22);
        else
            magnitude = a;
    }
    catch (int e)
    {
        cout << "Value of magnitude is invalid" << e << endl;
    }
}
void earthquake::set_magnitude(string a){
    try
    {
        int b = str2int(a);
        set_magnitude(b);
    }
    catch (int e)
    {
        set_magnitude(-1);
    }
}

// This "set_elv" Function Is Checking the Validity of Elevation. ( It Works with Double and String)

void earthquake::set_elv(double a) {
    try
    {
        if (a < 0 || a > 100000)
            throw (22);
        else
            elv = a;
    }
    catch (int e)
    {
        cout << "Value of elv is invalid" << e << endl;
    }
}
void earthquake::set_elv(string a){
    try
    {
        int b = str2int(a);
        set_elv(b);
    }
    catch (int e)
    {
        set_elv(-1);
    }
}

// day 
void earthquake::set_day(int d) {
    try
    {
        if (d < 1 || d > 31)
            throw (20);
        else
            day = d;
    }
    catch (int e)
    {
        cout << "Value of dayy is invalid" << endl;
    }
}

void earthquake::set_day(string a){
    int b = str2int(a);
    set_day(b);
}
void earthquake::set_sec(int a) {
    try
    {
        if (a < 0 || a > 59)
            throw (22);
        else
            sec = a;
    }
    catch (int e)
    {
        cout << "Value of second is invalid" << e << endl;
    }
}

void earthquake::set_sec(string a){
    try
    {
        int b = str2int(a);
        set_sec(b);
    }
    catch (int e)
    {
        set_sec(-1);
    }
}

void earthquake::set_ms(double a) {
    try
    {
        if (a < 0 || a > 59)
            throw (22);
        else
            sec = a;
    }
    catch (int e)
    {
        cout << "Value of ms is invalid" << e << endl;
    }
}

void earthquake::set_ms(string a){
    try
    {
        int b = str2int(a);
        set_ms(b);
    }
    catch (int e)
    {
        set_ms(-1);
    }
}
