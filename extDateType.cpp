#include "extDateType.h"
#include <iostream>
#include <sstream>

using namespace std;

// array of month names
const string extDateType::monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

// constructor
extDateType::extDateType(int m, int d, int y) : dateType(m, d, y) {
    setMonthString();
}

// set the month in string form
void extDateType::setMonthString() {
    monthString = monthNames[getMonth()];
}

// print date in "Month Day, Year" format
void extDateType::printLongDate() const {
    cout << monthString << " " << getDay() << ", " << getYear() << endl;
}

// print date in "Month Year" format
void extDateType::printLongMonth() const {
    cout << monthString << " " << getYear() << endl;
}
