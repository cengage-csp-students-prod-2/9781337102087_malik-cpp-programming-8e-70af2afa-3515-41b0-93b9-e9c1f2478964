#include "extClockType.h"
#include <iostream>
using namespace std;

int main() {
    // Test default constructor
    extClockType clock1;
    cout << "Default clock: ";
    clock1.printTime();
    cout << endl;

    // Test custom initialization
    extClockType clock2(12, 30, 45, "EST");
    cout << "Custom clock: ";
    clock2.printTime();
    cout << endl;

    // Test modifying time and time zone
    clock1.setTime(9, 15, 0);
    clock1.setTimeZone("PST");
    cout << "Modified clock: ";
    clock1.printTime();
    cout << endl;

    return 0;
}
