#include "rectangleType.h"

int main() {
    rectangleType rect1(5, 10);
    rectangleType rect2(3, 7);

    // Test pre-increment operator
    cout << "Before pre-increment: " << rect1 << endl;
    ++rect1;
    cout << "After pre-increment: " << rect1 << endl;

    // Test post-increment operator
    cout << "Before post-increment: " << rect2 << endl;
    rect2++;
    cout << "After post-increment: " << rect2 << endl;

    // Test pre-decrement operator
    cout << "Before pre-decrement: " << rect1 << endl;
    --rect1;
    cout << "After pre-decrement: " << rect1 << endl;

    // Test post-decrement operator
    cout << "Before post-decrement: " << rect2 << endl;
    rect2--;
    cout << "After post-decrement: " << rect2 << endl;

    // Test binary operator -
    rectangleType rect3 = rect1 - rect2;
    cout << "Result of rect1 - rect2: " << rect3 << endl;

    // Test relational operators
    if (rect1 == rect2) {
        cout << "rect1 and rect2 have the same area." << endl;
    } else {
        cout << "rect1 and rect2 do not have the same area." << endl;
    }

    if (rect1 > rect2) {
        cout << "rect1 has a larger area than rect2." << endl;
    } else {
        cout << "rect1 does not have a larger area than rect2." << endl;
    }

    // Test stream extraction operator
    rectangleType rect4;
    cin >> rect4;
    cout << "You entered: " << rect4 << endl;

    return 0;
}