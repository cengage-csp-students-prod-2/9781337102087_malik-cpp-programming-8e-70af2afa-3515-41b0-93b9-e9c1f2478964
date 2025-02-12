#include "rectangleType.h"

// Constructors
rectangleType::rectangleType(double l, double w) : length(l), width(w) {}

// Getter functions
double rectangleType::getLength() const { return length; }
double rectangleType::getWidth() const { return width; }

// Setter functions
void rectangleType::setDimensions(double l, double w) {
    if (l > 0) length = l;
    else length = 0;
    if (w > 0) width = w;
    else width = 0;
}

// Calculate area
double rectangleType::area() const {
    return length * width;
}

// Overload pre-increment operator (++rectangle)
rectangleType& rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

// Overload post-increment operator (rectangle++)
rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

// Overload pre-decrement operator (--rectangle)
rectangleType& rectangleType::operator--() {
    if (length > 1) --length;
    if (width > 1) --width;
    return *this;
}

// Overload post-decrement operator (rectangle--)
rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    --(*this);
    return temp;
}

// Overload binary subtraction operator (rectangle1 - rectangle2)
rectangleType rectangleType::operator-(const rectangleType& other) const {
    double newLength = length - other.length;
    double newWidth = width - other.width;
    if (newLength > 0 && newWidth > 0) {
        return rectangleType(newLength, newWidth);
    } else {
        cout << "Error: Resulting dimensions are not positive." << endl;
        return *this;
    }
}

// Overload relational operators based on area
bool rectangleType::operator==(const rectangleType& other) const {
    return area() == other.area();
}

bool rectangleType::operator!=(const rectangleType& other) const {
    return area() != other.area();
}

bool rectangleType::operator<(const rectangleType& other) const {
    return area() < other.area();
}

bool rectangleType::operator>(const rectangleType& other) const {
    return area() > other.area();
}

bool rectangleType::operator<=(const rectangleType& other) const {
    return area() <= other.area();
}

bool rectangleType::operator>=(const rectangleType& other) const {
    return area() >= other.area();
}

// Overload stream insertion operator (<<)
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << ", Width: " << rect.width << ", Area: " << rect.area();
    return os;
}

// Overload stream extraction operator (>>)
istream& operator>>(istream& is, rectangleType& rect) {
    cout << "Enter length: ";
    is >> rect.length;
    cout << "Enter width: ";
    is >> rect.width;
    return is;
}