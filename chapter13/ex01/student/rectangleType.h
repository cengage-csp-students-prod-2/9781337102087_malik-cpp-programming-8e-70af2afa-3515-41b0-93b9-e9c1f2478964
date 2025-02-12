#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
#include <limits>

using namespace std;

class rectangleType {
protected:
    double length;
    double width;

public:
    // Constructors
    rectangleType(double l = 1.0, double w = 1.0);

    // Getters
    double getLength() const;
    double getWidth() const;
    double area() const;

    // Overloaded Operators as Member Functions
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;

    rectangleType operator++();    // Pre-increment
    rectangleType operator++(int); // Post-increment
    rectangleType operator--();    // Pre-decrement
    rectangleType operator--(int); // Post-decrement
    rectangleType operator-(const rectangleType& other);

    // Overloaded I/O Stream Operators
    friend ostream& operator<<(ostream& os, const rectangleType& rect);
    friend istream& operator>>(istream& is, rectangleType& rect);
};

#endif
