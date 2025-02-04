#ifndef H_ExtClockType
#define H_ExtClockType
  
#include <string> 

#include "clockType.h"

using namespace std;
 
class extClockType: public clockType
{
public:
    void setTime(int hours, int minutes, int seconds, string tZone);
    void printTime();

    extClockType(int = 0, int = 0, int = 0, string = "EST");

private:
    string timeZone;
};

#endif