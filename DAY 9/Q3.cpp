#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int d, m, y;
    void accept() { cin >> d >> m >> y; }
    void display() { cout << d << "/" << m << "/" << y << endl; }
};

class Student {
    int rollNo;
    float marks;
    string course;
    Date joiningDate, endDate;

public:
    void accept() {
        cin >> rollNo >> marks >> course;
        joiningDate.accept();
        endDate.accept();
    }

    void display() {
        cout << rollNo << " " << marks << " " << course << endl;
        joiningDate.display();
        endDate.display();
    }
};
