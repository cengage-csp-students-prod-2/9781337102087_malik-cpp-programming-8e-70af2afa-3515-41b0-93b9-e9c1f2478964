#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

#include <iostream>
using namespace std;

class clockType {
protected:
    int hours;
    int minutes;
    int seconds;

public:
    clockType(int h = 0, int m = 0, int s = 0);
    void setTime(int h, int m, int s);
    void getTime(int &h, int &m, int &s) const;
    virtual void printTime() const; // Add "virtual" to allow overriding
    virtual ~clockType() = default; // Virtual destructor (optional, but good practice)
};

#endif
