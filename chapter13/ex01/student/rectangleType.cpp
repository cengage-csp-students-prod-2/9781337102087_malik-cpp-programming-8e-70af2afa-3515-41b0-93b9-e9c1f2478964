#include "rectangleType.h"

// Constructor
rectangleType::rectangleType(double l, double w) {
    length = (l > 0) ? l : 1.0;
    width = (w > 0) ? w : 1.0;
}

// Getters
double rectangleType::getLength() const { return length; }
double rectangleType::getWidth() const { return width; }
double rectangleType::area() const { return length * width; }

// Pre-increment
rectangleType rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

// Post-increment
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++length;
    ++width;
    return temp;
}

// Pre-decrement
rectangleType rectangleType::operator--() {
    if (length > 1) --length;
    if (width > 1) --width;
    return *this;
}

// Post-decrement
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    if (length > 1) --length;
    if (width > 1) --width;
    return temp;
}

// Subtraction Operator
rectangleType rectangleType::operator-(const rectangleType& other) {
    double newLength = length - other.length;
    double newWidth = width - other.width;

    if (newLength <= 0 || newWidth <= 0) {
        cout << "Subtraction would result in negative or zero dimensions! Operation aborted." << endl;
        return *this;
    }

    return rectangleType(newLength, newWidth);
}

// Comparison Operators (Compare areas)
bool rectangleType::operator==(const rectangleType& other) const { return area() == other.area(); }
bool rectangleType::operator!=(const rectangleType& other) const { return area() != other.area(); }
bool rectangleType::operator>(const rectangleType& other) const { return area() > other.area(); }
bool rectangleType::operator<(const rectangleType& other) const { return area() < other.area(); }
bool rectangleType::operator>=(const rectangleType& other) const { return area() >= other.area(); }
bool rectangleType::operator<=(const rectangleType& other) const { return area() <= other.area(); }

// Output Operator
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Rectangle: Length = " << rect.length << ", Width = " << rect.width;
    return os;
}

// Input Operator
istream& operator>>(istream& is, rectangleType& rect) {
    cout << "Enter length: ";
    is >> rect.length;
    cout << "Enter width: ";
    is >> rect.width;

    if (rect.length <= 0 || rect.width <= 0) {
        cout << "Invalid input! Setting to default values (1.0, 1.0)." << endl;
        rect.length = 1.0;
        rect.width = 1.0;
    }
    return is;
}
