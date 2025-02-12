#include "rectangleType.h"

int main() {
    // Create two rectangles
    rectangleType rect1(5, 10);
    rectangleType rect2(3, 7);

    // Test pre-increment operator
    cout << "Initial rect1: " << rect1 << endl;
    ++rect1;
    cout << "After pre-increment (++rect1): " << rect1 << endl;

    // Test post-increment operator
    rect1++;
    cout << "After post-increment (rect1++): " << rect1 << endl;

    // Test pre-decrement operator
    --rect1;
    cout << "After pre-decrement (--rect1): " << rect1 << endl;

    // Test post-decrement operator
    rect1--;
    cout << "After post-decrement (rect1--): " << rect1 << endl;

    // Test binary subtraction operator
    rectangleType rect3 = rect1 - rect2;
    cout << "Result of rect1 - rect2: " << rect3 << endl;

    // Test relational operators
    cout << "Is rect1 == rect2? " << (rect1 == rect2 ? "Yes" : "No") << endl;
    cout << "Is rect1 != rect2? " << (rect1 != rect2 ? "Yes" : "No") << endl;
    cout << "Is rect1 > rect2? " << (rect1 > rect2 ? "Yes" : "No") << endl;
    cout << "Is rect1 < rect2? " << (rect1 < rect2 ? "Yes" : "No") << endl;

   
    rectangleType rect4;
    cout << "Enter dimensions for rect4:" << endl;
    cin >> rect4;
    cout << "rect4: " << rect4 << endl;

    return 0;
}