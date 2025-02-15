#include "rectangleType.h"

// Constructors
rectangleType::rectangleType(double l, double w) : length(l), width(w) {}

// Accessors
double rectangleType::getLength() const {
    return length;
}

double rectangleType::getWidth() const {
    return width;
}

// Mutators
void rectangleType::setLength(double l) {
    length = l;
}

void rectangleType::setWidth(double w) {
    width = w;
}

// Area calculation
double rectangleType::area() const {
    return length * width;
}

// Overload operators
rectangleType& rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

rectangleType& rectangleType::operator--() {
    if (length > 1 && width > 1) {
        --length;
        --width;
    } else {
        cout << "Cannot decrement: dimensions must be positive." << endl;
    }
    return *this;
}

rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    --(*this);
    return temp;
}

rectangleType rectangleType::operator-(const rectangleType& other) const {
    double newLength = length - other.length;
    double newWidth = width - other.width;
    if (newLength > 0 && newWidth > 0) {
        return rectangleType(newLength, newWidth);
    } else {
        cout << "Cannot subtract: resulting dimensions must be positive." << endl;
        return *this;
    }
}

// Relational operators
bool rectangleType::operator==(const rectangleType& other) const {
    return area() == other.area();
}

bool rectangleType::operator!=(const rectangleType& other) const {
    return area() != other.area();
}

bool rectangleType::operator>(const rectangleType& other) const {
    return area() > other.area();
}

bool rectangleType::operator<(const rectangleType& other) const {
    return area() < other.area();
}

bool rectangleType::operator>=(const rectangleType& other) const {
    return area() >= other.area();
}

bool rectangleType::operator<=(const rectangleType& other) const {
    return area() <= other.area();
}

// Stream operators
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << ", Width: " << rect.width << ", Area: " << rect.area();
    return os;
}

istream& operator>>(istream& is, rectangleType& rect) {
    cout << "Enter length: ";
    is >> rect.length;
    cout << "Enter width: ";
    is >> rect.width;
    return is;
}