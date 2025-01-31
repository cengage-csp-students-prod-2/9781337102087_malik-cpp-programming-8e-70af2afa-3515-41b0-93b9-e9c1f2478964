#include "extClockType.h"
#include <iostream>

using namespace std;

int main() {
    // Create an extClockType object
    extClockType myClock(12, 30, 45, "EST");

    // Print current time and time zone
    cout << "Current time: ";
    myClock.printExtTime();

    // Modify the time and time zone
    myClock.setTime(23, 15, 10);
    myClock.setTimeZone("PST");

    // Print updated time and time zone
    cout << "Updated time: ";
    myClock.printExtTime();

    return 0;
}
