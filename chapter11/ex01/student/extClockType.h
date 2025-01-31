#ifndef EXTCLOCKTYPE_H
#define EXTCLOCKTYPE_H

#include "clockType.h"
#include <string>

class extClockType : public clockType {
private:
    std::string timeZone;

public:
    extClockType(int h = 0, int m = 0, int s = 0, std::string tz = "UTC");
    void setTimeZone(const std::string &tz);
    std::string getTimeZone() const;
    void printExtTime() const;
};

#endif
