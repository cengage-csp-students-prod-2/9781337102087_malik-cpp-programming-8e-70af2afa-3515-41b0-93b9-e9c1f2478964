#include "extClockType.h"
#include <iostream>

using namespace std;


extClockType::extClockType(int h, int m, int s, string tz) : clockType(h, m, s) {
    timeZone = tz;
}


void extClockType::setTimeZone(const string &tz) {
    timeZone = tz;
}


string extClockType::getTimeZone() const {
    return timeZone;
}

// Print the time along with the time zone
void extClockType::printExtTime() const {
    printTime();  // Call the base class print function
    cout << " " << timeZone << endl;
}
