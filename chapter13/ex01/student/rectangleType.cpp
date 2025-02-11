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

// Pre-increment: Increase both dimensions by 1
rectangleType rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

// Post-increment: Increase both dimensions by 1, return original
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++length;
    ++width;
    return temp;
}

// Pre-decrement: Decrease both dimensions by 1 (must remain positive)
rectangleType rectangleType::operator--() {
    if (length > 1) --length;
    if (width > 1) --width;
    return *this;
}

// Post-decrement: Decrease both dimensions by 1, return original
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    if (length > 1) --length;
    if (width > 1) --width;
    return temp;
}

// Binary Subtraction: Subtract dimensions of one rectangle from another
rectangleType rectangleType::operator-(const rectangleType& other) {
    double newLength = length - other.length;
    double newWidth = width - other.width;

    if (newLength <= 0 || newWidth <= 0) {
        cout << "Subtraction would result in negative or zero dimensions! Operation aborted." << endl;
        return *this;
    }

    return rectangleType(newLength, newWidth);
}

// Equality operator (compare areas)
bool rectangleType::operator==(const rectangleType& other) const {
    return area() == other.area();
}

// Inequality operator (compare areas)
bool rectangleType::operator!=(const rectangleType& other) const {
    return area() != other.area();
}

// Greater than (compare areas)
bool rectangleType::operator>(const rectangleType& other) const {
    return area() > other.area();
}

// Less than (compare areas)
bool rectangleType::operator<(const rectangleType& other) const {
    return area() < other.area();
}

// Greater than or equal (compare areas)
bool rectangleType::operator>=(const rectangleType& other) const {
    return area() >= other.area();
}

// Less than or equal (compare areas)
bool rectangleType::operator<=(const rectangleType& other) const {
    return area() <= other.area();
}

// Overload << operator for output
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Rectangle: Length = " << rect.length << ", Width = " << rect.width;
    return os;
}

// Overload >> operator for input
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
