#include "extClockType.h"
#include <iostream>
using namespace std;

int main() {
    // Create an object of extClockType with default time and time zone
    extClockType clock1;
    cout << "Default clock: ";
    clock1.printTime();
    cout << endl;

    // Create an object of extClockType with custom time and time zone
    extClockType clock2(12, 30, 45, "EST");
    cout << "Custom clock: ";
    clock2.printTime();
    cout << endl;

    // Modify the time and time zone of clock1
    clock1.setTime(9, 15, 0);
    clock1.setTimeZone("PST");
    cout << "Modified clock: ";
    clock1.printTime();
    cout << endl;

    return 0;
}
