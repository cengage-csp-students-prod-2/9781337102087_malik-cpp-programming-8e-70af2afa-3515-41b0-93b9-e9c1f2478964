#include "extClockType.h"
#include <iostream>
using namespace std;

extClockType::extClockType(int h, int m, int s, const string &tz) : clockType(h, m, s) {
    timeZone = tz;
}

void extClockType::setTimeZone(const string &tz) {
    timeZone = tz;
}

string extClockType::getTimeZone() const {
    return timeZone;
}

void extClockType::printTime() const {
    clockType::printTime(); // Call base class implementation
    cout << " " << timeZone;
}
