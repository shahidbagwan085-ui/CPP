#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void initDate(Date &d) {
    d.day = 1;
    d.month = 1;
    d.year = 2000;
}

void acceptDateFromConsole(Date &d) {
    cout << "Enter Day Month Year: ";
    cin >> d.day >> d.month >> d.year;
}

void printDateOnConsole(Date d) {
    cout << "Date: " << d.day << "/" << d.month << "/" << d.year << endl;
}

bool isLeapYear(Date d) {
    if (d.year % 400 == 0)
        return true;
    else if (d.year % 100 == 0)
        return false;
    else if (d.year % 4 == 0)
        return true;
    else
        return false;
}

int main() {
    Date d;
    int choice;

    do {
        cout << "\n1.Init Date\n2.Accept Date\n3.Print Date\n4.Check Leap Year\n0.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: initDate(d); break;
            case 2: acceptDateFromConsole(d); break;
            case 3: printDateOnConsole(d); break;
            case 4:
                if (isLeapYear(d))
                    cout << "Leap Year\n";
                else
                    cout << "Not a Leap Year\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
