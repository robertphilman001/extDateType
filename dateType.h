#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
public:
    dateType(int m = 1, int d = 1, int y = 1900); // constructor
    void setDate(int m, int d, int y); // set the date
    int getMonth() const; // get the month
    int getDay() const; // get the day
    int getYear() const; // get the year
    bool isLeapYear() const; // check if leap year
    int daysInMonth(int m, int y) const; 
    void printDate() const; // print date
    int daysPassed() const; // days passed since beginning of year
    int daysRemaining() const; // days remaining in year
    void setFutureDate(int days); // set date to future date by number of days provided
    void addDays(int d);
private:
    int month; // month of date
    int day; // day of date
    int year; // year of date
    bool checkDate(int m, int d, int y) const; // check if date is valid
};

#endif
