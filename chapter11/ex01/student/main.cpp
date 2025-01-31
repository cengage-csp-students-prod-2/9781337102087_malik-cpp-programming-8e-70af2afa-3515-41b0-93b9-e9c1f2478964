#include "extClockType.h"
#include <iostream>

using namespace std;

int main() {
    extClockType myClock(12, 30, 45, "EST");

    cout << "Current time: ";
    myClock.printExtTime();

    myClock.setTime(23, 15, 10);
    myClock.setTimeZone("PST");

    cout << "Updated time: ";
    myClock.printExtTime();

    return 0;
}
