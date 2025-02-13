#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    rectangleType rect1(5, 10);
    rectangleType rect2(3, 6);
    rectangleType rect3(5, 10);

    cout << "Initial Rectangles:" << endl;
    cout << rect1 << endl;
    cout << rect2 << endl;

    cout << "\nIncrement rect1: " << ++rect1 << endl;
    cout << "Post-increment rect2: " << rect2++ << endl;
    cout << "After post-increment: " << rect2 << endl;

    cout << "\nDecrement rect1: " << --rect1 << endl;
    cout << "Post-decrement rect2: " << rect2-- << endl;
    cout << "After post-decrement: " << rect2 << endl;

    rectangleType rect4 = rect1 - rect2;
    cout << "\nAfter subtracting rect2 from rect1: " << rect4 << endl;

    cout << "\nComparing Rectangles:" << endl;
    cout << "Is rect1 == rect3? " << (rect1 == rect3 ? "Yes" : "No") << endl;
    
    rectangleType rect5;
    cout << "\nEnter dimensions for a new rectangle:" << endl;
    cin >> rect5;
    cout << "You entered: " << rect5 << endl;

    return 0;
}
