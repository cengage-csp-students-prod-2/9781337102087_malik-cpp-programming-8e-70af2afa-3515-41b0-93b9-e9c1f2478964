#include "extClockType.h"
#include <iostream>

using namespace std;

// Constructor definition
extClockType::extClockType(int h, int m, int s, string tz) : clockType(h, m, s) {
    timeZone = tz;
}

// Set the time zone
void extClockType::setTimeZone(const string &tz) {
    timeZone = tz;
}

// Get the time zone
string extClockType::getTimeZone() const {
    return timeZone;
}

// Print the time along with the time zone
void extClockType::printExtTime() const {
    printTime();
    cout << " " << timeZone << endl;
}
