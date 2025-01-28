#ifndef EXT_CLOCK_TYPE_H
#define EXT_CLOCK_TYPE_H

#include <iostream>
#include <string>
#include "clockType.h"

class extClockType : public clockType {
private:
    std::string timeZone; // Private member variable added

public:
    // Constructor
    extClockType(int h = 0, int m = 0, int s = 0, std::string tz = "UTC") {
        setTime(h, m, s);
        timeZone = tz;
    }

    // Set the time zone
    void setTimeZone(std::string tz) {
        timeZone = tz;
    }

    // Get the time zone
    std::string getTimeZone() const {
        return timeZone;
    }

    // Override print function to include time zone
    void printTime() const {
        clockType::printTime();
        std::cout << " Time Zone: " << timeZone << std::endl;
    }
};

#endif
