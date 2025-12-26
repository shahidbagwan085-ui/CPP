#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    ~Date() {
    }

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole() {
        cout << "Enter Date: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        return false;
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Date d;
    int choice;

    do {
        cout << "\n--- Date Menu ---\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            d.initDate();
            cout << "Date Initialized\n";
            break;

        case 2:
            d.acceptDateFromConsole();
            break;

        case 3:
            d.printDateOnConsole();
            break;

        case 4:
            if (d.isLeapYear())
                cout << "Leap Year\n";
            else
                cout << "Not a Leap Year\n";
            break;

        case 0:
            cout << "Exiting Program\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }
    } while (choice != 0);

    return 0;
}


