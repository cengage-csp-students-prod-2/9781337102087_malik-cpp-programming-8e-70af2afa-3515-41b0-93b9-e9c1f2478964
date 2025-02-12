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

// Operator Overloads - Relational Operators (Compare Areas)
bool rectangleType::operator==(const rectangleType& other) const { return area() == other.area(); }
bool rectangleType::operator!=(const rectangleType& other) const { return area() != other.area(); }
bool rectangleType::operator>(const rectangleType& other) const { return area() > other.area(); }
bool rectangleType::operator<(const rectangleType& other) const { return area() < other.area(); }
bool rectangleType::operator>=(const rectangleType& other) const { return area() >= other.area(); }
bool rectangleType::operator<=(const rectangleType& other) const { return area() <= other.area(); }

// Operator Overloads - Increment & Decrement
rectangleType rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++length;
    ++width;
    return temp;
}

rectangleType rectangleType::operator--() {
    if (length > 1) --length;
    if (width > 1) --width;
    return *this;
}

rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    if (length > 1) --length;
    if (width > 1) --width;
    return temp;
}

// Operator Overload - Subtraction
rectangleType rectangleType::operator-(const rectangleType& other) {
    double newLength = length - other.length;
    double newWidth = width - other.width;

    if (newLength <= 0 || newWidth <= 0) {
        cout << "Subtraction would result in negative dimensions! Operation aborted." << endl;
        return *this;
    }

    return rectangleType(newLength, newWidth);
}

// Stream Operators
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Rectangle: Length = " << rect.length << ", Width = " << rect.width << ", Area = " << rect.area();
    return os;
}

// Improved Input Handling with Validation
istream& operator>>(istream& is, rectangleType& rect) {
    cout << "Enter length: ";
    while (!(is >> rect.length) || rect.length <= 0) {
        cout << "Invalid input! Enter a positive number for length: ";
        is.clear(); // Clear error state
        is.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    cout << "Enter width: ";
    while (!(is >> rect.width) || rect.width <= 0) {
        cout << "Invalid input! Enter a positive number for width: ";
        is.clear(); // Clear error state
        is.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    return is;
}
