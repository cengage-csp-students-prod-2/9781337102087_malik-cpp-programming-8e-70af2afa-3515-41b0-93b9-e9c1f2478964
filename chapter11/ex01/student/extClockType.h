#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H

#include "clockType.h"
#include <string>
using namespace std;

class extClockType : public clockType {
private:
    string timeZone;

public:
    extClockType(int h = 0, int m = 0, int s = 0, const string &tz = "UTC");
    void setTimeZone(const string &tz);
    string getTimeZone() const;
    void printTime() const override; // This must match the base class exactly
};

#endif
