#include "extClockType.h"
#include <iostream>
using namespace std;

int main() {
    extClockType clock(12, 30, 45, "EST");
    clock.printTime();
    cout << endl;
    return 0;
}
