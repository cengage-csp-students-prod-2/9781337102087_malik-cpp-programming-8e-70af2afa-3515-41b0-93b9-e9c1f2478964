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

    // Overload pre-increment operator
    rectangleType& operator++();

    // Overload post-increment operator
    rectangleType operator++(int);

    // Overload pre-decrement operator
    rectangleType& operator--();

    // Overload post-decrement operator
    rectangleType operator--(int);

    // Overload binary operator -
    rectangleType operator-(const rectangleType& other) const;

    // Overload relational operators
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;

    // Overload stream insertion and extraction operators
    friend ostream& operator<<(ostream& os, const rectangleType& rect);
    friend istream& operator>>(istream& is, rectangleType& rect);
};

#endif