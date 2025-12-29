#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date() { day = month = year = 1; }
    Date(int d, int m, int y) { day = d; month = m; year = y; }
    ~Date() {}

    void acceptDateFromConsole() {
        cin >> day >> month >> year;
    }

    void printDate() {
        cout << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear() {
        return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
    }

    void addDate(int d) {
        day += d;
    }
};
