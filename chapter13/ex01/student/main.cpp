#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    // Create two rectangle objects
    rectangleType rect1(10, 5);
    rectangleType rect2(4, 3);

    cout << "Initial Rectangles:\n";
    cout << rect1 << endl;
    cout << rect2 << endl;

    // Test Increment and Decrement Operators
    cout << "\nIncrement rect1 (pre-increment): " << ++rect1 << endl;
    cout << "Post-increment rect2: " << rect2++ << endl;
    cout << "After post-increment: " << rect2 << endl;

    cout << "\nDecrement rect1 (pre-decrement): " << --rect1 << endl;
    cout << "Post-decrement rect2: " << rect2-- << endl;
    cout << "After post-decrement: " << rect2 << endl;

    // Test Subtraction Operator
    rectangleType rect3 = rect1 - rect2;
    cout << "\nAfter subtracting rect2 from rect1: " << rect3 << endl;

    // Test Relational Operators
    cout << "\nComparison Results:\n";
    cout << "rect1 == rect2: " << (rect1 == rect2 ? "True" : "False") << endl;
    cout << "rect1 != rect2: " << (rect1 != rect2 ? "True" : "False") << endl;
    cout << "rect1 > rect2: " << (rect1 > rect2 ? "True" : "False") << endl;
    cout << "rect1 < rect2: " << (rect1 < rect2 ? "True" : "False") << endl;
    cout << "rect1 >= rect2: " << (rect1 >= rect2 ? "True" : "False") << endl;
    cout << "rect1 <= rect2: " << (rect1 <= rect2 ? "True" : "False") << endl;

    return 0;
}
