#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
using namespace std;

class rectangleType {
protected:
    double length;
    double width;

public:
    // Constructors
    rectangleType(double l = 0, double w = 0);

    // Accessors
    double getLength() const;
    double getWidth() const;

    // Mutators
    void setLength(double l);
    void setWidth(double w);

    // Area calculation
    double area() const;

    // Overload operators
    rectangleType& operator++();       // Pre-increment
    rectangleType operator++(int);     // Post-increment
    rectangleType& operator--();       // Pre-decrement
    rectangleType operator--(int);     // Post-decrement
    rectangleType operator-(const rectangleType& other) const;

    // Relational operators
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;

    // Friend functions for stream operators
    friend ostream& operator<<(ostream& os, const rectangleType& rect);
    friend istream& operator>>(istream& is, rectangleType& rect);
};

#endif