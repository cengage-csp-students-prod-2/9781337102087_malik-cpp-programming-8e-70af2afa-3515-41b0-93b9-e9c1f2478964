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

// Overload pre-increment operator
rectangleType& rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

// Overload post-increment operator
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

// Overload pre-decrement operator
rectangleType& rectangleType::operator--() {
    if (length > 1 && width > 1) {
        --length;
        --width;
    } else {
        cout << "Cannot decrement: dimensions must be positive." << endl;
    }
    return *this;
}

// Overload post-decrement operator
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    --(*this);
    return temp;
}

// Overload binary operator -
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

// Overload relational operators
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

// Overload stream insertion operator
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << ", Width: " << rect.width << ", Area: " << rect.area();
    return os;
}

// Overload stream extraction operator
istream& operator>>(istream& is, rectangleType& rect) {
    cout << "Enter length: ";
    is >> rect.length;
    cout << "Enter width: ";
    is >> rect.width;
    return is;
}