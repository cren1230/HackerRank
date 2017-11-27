#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */
#include <iostream>
#include <sstream>  // for string streams
#include <string>  // for string

using namespace std;

string timeConversion(string s) {
    // Complete this function
    string hours = s.substr(0,2);
    string remainingTime = s.substr(2, 6);
	string meridiem = s.substr(8,2);
    if ((meridiem == "AM" || meridiem == "am") && hours == "12")
    {
    	hours = "00";
    }
    else if (meridiem == "PM" || meridiem == "pm")
	{
		int hh = atoi(hours.c_str());
		if (hh != 12)
		{
			hh += 12;
//			ostringstream oss;
//			oss << hh;
//			hours = oss.str();
			hours = to_string(hh);
		}
	}

    return hours + remainingTime;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
