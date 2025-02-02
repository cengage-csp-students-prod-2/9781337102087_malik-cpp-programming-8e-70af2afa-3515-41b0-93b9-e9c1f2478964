#include "clockType.h"

clockType::clockType(int h, int m, int s) {
    setTime(h, m, s);
}

void clockType::setTime(int h, int m, int s) {
    if (0 <= h && h < 24)
        hours = h;
    else
        hours = 0;

    if (0 <= m && m < 60)
        minutes = m;
    else
        minutes = 0;

    if (0 <= s && s < 60)
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
    if (hours < 10)
        cout << "0";
    cout << hours << ":";
    if (minutes < 10)
        cout << "0";
    cout << minutes << ":";
    if (seconds < 10)
        cout << "0";
    cout << seconds;
}
