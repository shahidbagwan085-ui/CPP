#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int d, m, y;
    void accept() { cin >> d >> m >> y; }
    void display() { cout << d << "/" << m << "/" << y << endl; }
};

class Employee {
    int emp_id;
    string dept;
    Date joiningDate;

public:
    void accept() {
        cin >> emp_id >> dept;
        joiningDate.accept();
    }

    void display() {
        cout << emp_id << " " << dept << " ";
        joiningDate.display();
    }
};
