#include <iostream>
#include "dateType.h"
#include "extDateType.h"
using namespace std;

int main() {
    // Create a date object with default parameters
    dateType myDate;

    // Set the date to 12-31-1999
    myDate.setDate(1, 1, 1900);

    // Print the date in the format mm-dd-yyyy
    cout << "The date is ";
    myDate.printDate();
    cout << endl;

    // Print the number of days passed since the beginning of the year
    cout << "Days passed since the beginning of the year: " << myDate.daysPassed() << endl;

    // Print the number of days remaining in the year
    cout << "Days remaining in the year: " << myDate.daysRemaining() << endl;

    // Set the date to a future date using the number of days provided as input
    myDate.addDays(365);
    cout << "New date is ";
    myDate.printDate();
    cout << endl;












    extDateType today(5, 1, 2023);
    extDateType tomorrow = today;

    tomorrow.setDate(6, 1, 2023);

    cout << "Today's date: ";
    today.printDate();
    cout << endl;

    cout << "Tomorrow's date: ";
    tomorrow.printDate();
    cout << endl;

    cout << "Number of days between today and tomorrow: "
         << today.month(tomorrow) << endl;

    cout << "Number of days between tomorrow and today: "
         << tomorrow.month(today) << endl;

    cout << "Month of today's date: ";
    today.printLongDate();
    cout << endl;

    cout << "Long month of today's date: ";
    today.printLongMonth();
    cout << endl;

    cout << "Month of tomorrow's date: ";
    tomorrow.printLongDate();
    cout << endl;

    cout << "Long month of tomorrow's date: ";
    tomorrow.printLongMonth();
    cout << endl;

    return 0;




  

}
