#include "rectangleType.h"

int main() {
    rectangleType rect1(5, 10);
    rectangleType rect2(3, 7);

    // Test operators
    ++rect1;
    rect2++;
    cout << "Rect1: " << rect1 << endl;
    cout << "Rect2: " << rect2 << endl;

    rectangleType rect3 = rect1 - rect2;
    cout << "Rect3 (Rect1 - Rect2): " << rect3 << endl;

    if (rect1 == rect2) {
        cout << "Rect1 and Rect2 have the same area." << endl;
    } else {
        cout << "Rect1 and Rect2 do not have the same area." << endl;
    }

    return 0;   
    
}