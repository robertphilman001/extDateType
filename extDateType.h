#ifndef EXTDATE_TYPE_H
#define EXTDATE_TYPE_H
#include <iostream>
#include "dateType.h"
using namespace std;

class extDateType : public dateType {
public:
    extDateType(int m = 1, int d = 1, int y = 1900); // constructor
    void setMonthString(); // set the month in string form
    void printLongDate() const; // print date in "Month Day, Year" format
    void printLongMonth() const; // print date in "Month Year" format
private:
    std:: string monthString; // month of date in string form
    static const std::string monthNames[]; // array of month names
};

#endif
