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

    // Getter functions
    double getLength() const;
    double getWidth() const;

    // Setter functions
    void setDimensions(double l, double w);

    // Calculate area
    double area() const;

    // Overload pre-increment operator (++rectangle)
    rectangleType& operator++();

    // Overload post-increment operator (rectangle++)
    rectangleType operator++(int);

    // Overload pre-decrement operator (--rectangle)
    rectangleType& operator--();

    // Overload post-decrement operator (rectangle--)
    rectangleType operator--(int);

    // Overload binary subtraction operator (rectangle1 - rectangle2)
    rectangleType operator-(const rectangleType& other) const;

    // Overload relational operators based on area
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;

    // Overload stream insertion and extraction operators
    friend ostream& operator<<(ostream& os, const rectangleType& rect);
    friend istream& operator>>(istream& is, rectangleType& rect);
};

#endif