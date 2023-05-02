#include "dateType.h"
#include <iostream>

using namespace std;

// Default constructor
dateType::dateType(int d, int m, int y) {
    setDate(d, m, y);
}

// Function to set the date
void dateType::setDate(int d, int m, int y) {
    bool validDate = true;
    if (y < 1900) {
        validDate = false;
    }
    if (m < 1 || m > 12) {
        validDate = false;
    }
    if (d < 1 || d > daysInMonth(m, y)) {
        validDate = false;
    }
    if (validDate) {
        day = d;
        month = m;
        year = y;
    } else {
        day = 1;
        month = 1;
        year = 1900;
    }
}

// Function to get the day
int dateType::getDay() const {
    return day;
}

// Function to get the month
int dateType::getMonth() const {
    return month;
}

// Function to get the year
int dateType::getYear() const {
    return year;
}

// Function to check if the year is a leap year
bool dateType::isLeapYear() const {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

// Function to get the number of days in a given month
int dateType::daysInMonth(int m, int y) const {
    switch (m) {
        case 2:
            if (isLeapYear()) {
                return 29;
            } else {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

// Function to print the date in the format mm-dd-yyyy
void dateType::printDate() const {
    cout << month << "-" << day << "-" << year;
}

// Function to get the number of days passed since the beginning of the year
int dateType::daysPassed() const {
    int days = 0;
    for (int i = 1; i < month; i++) {
        days += daysInMonth(i, year);
    }
    days += day - 1;
    return days;
}

// Function to get the number of days remaining in the year
int dateType::daysRemaining() const {
    int days = 365;
    if (isLeapYear()) {
        days = 366;
    }
    days -= daysPassed();
    return days;
}

// Function to set the date to a future date using the number of days provided as input
void dateType::addDays(int d) {
    while (d > 0) {
        int daysInCurrMonth = daysInMonth(month, year);
        if (day + d > daysInCurrMonth) {
            d -= (daysInCurrMonth - day + 1);
            day = 1;
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        } else {
            day += d;
            d = 0;
        }
    }
}
