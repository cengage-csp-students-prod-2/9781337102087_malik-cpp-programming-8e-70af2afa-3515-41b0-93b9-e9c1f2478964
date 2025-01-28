#include <iostream>
#include <string>
using namespace std;

class clockType {
protected:
    int hours;
    int minutes;
    int seconds;

public:
    clockType(int h = 0, int m = 0, int s = 0) {
        setTime(h, m, s);
    }

    void setTime(int h, int m, int s) {
        if (0 <= h && h < 24)
            hours = h;
        else
            hours = 0;

        if (0 <= m && m < 60)
            minutes = m;
        else
            minutes = 0;

        if (0 <= s && s < 60)
            seconds = s;
        else
            seconds = 0;
    }

    void getTime(int &h, int &m, int &s) const {
        h = hours;
        m = minutes;
        s = seconds;
    }

    void printTime() const {
        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds;
    }
};

class extClockType : public clockType {
private:
    string timeZone;

public:
    extClockType(int h = 0, int m = 0, int s = 0, const string &tz = "UTC") : clockType(h, m, s) {
        timeZone = tz;
    }

    void setTimeZone(const string &tz) {
        timeZone = tz;
    }

    string getTimeZone() const {
        return timeZone;
    }

    void printTime() const {
        clockType::printTime();
        cout << " " << timeZone;
    }
};

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
