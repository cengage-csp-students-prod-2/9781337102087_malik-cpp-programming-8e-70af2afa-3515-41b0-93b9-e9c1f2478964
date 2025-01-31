#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

#include <iostream>  // For input/output

class clockType {
protected:
    int hours;
    int minutes;
    int seconds;

public:
    clockType(int h = 0, int m = 0, int s = 0);
    void setTime(int h, int m, int s);
    void getTime(int &h, int &m, int &s) const;
    void printTime() const;
};

#endif
