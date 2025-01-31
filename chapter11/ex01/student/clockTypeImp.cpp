#include "clockType.h"
#include <iostream>

using namespace std;

clockType::clockType(int h, int m, int s) {
    setTime(h, m, s);
}

void clockType::setTime(int h, int m, int s) {
    if (h >= 0 && h < 24)
        hours = h;
    else
        hours = 0;

    if (m >= 0 && m < 60)
        minutes = m;
    else
        minutes = 0;

    if (s >= 0 && s < 60)
        seconds = s;
    else
        seconds = 0;
}

void clockType::getTime(int &h, int &m, int &s) const {
    h = hours;
    m = minutes;
    s = seconds;
}

void clockType::printTime() const {
    cout << (hours < 10 ? "0" : "") << hours << ":"
         << (minutes < 10 ? "0" : "") << minutes << ":"
         << (seconds < 10 ? "0" : "") << seconds;
}
