#include <iostream>
#include <string>
using namespace std;

//Date Class 
class Date {
    int day, month, year;

public:
    // Constructors
    Date() {
        day = month = year = 1;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Destructor
    ~Date() {}

    // Mutator
    void acceptDate() {
        cout << "Enter day month year: ";
        cin >> day >> month >> year;
    }

    // Inspector
    void displayDate() const {
        cout << day << "/" << month << "/" << year;
    }
};

// Employee Class 
class Employee {
    int emp_id;
    string dept;
    Date joiningDate;   // Association

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Joining Date:\n";
        joiningDate.acceptDate();
    }

    void display() const {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nDepartment: " << dept;
        cout << "\nJoining Date: ";
        joiningDate.displayDate();
    }
};

// Student Class 
class Student {
    int rollNo;
    float marks;
    string course;
    Date joiningDate;   // Association
    Date endDate;       // Association

public:
    void accept() {
        cout << "\nEnter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Course: ";
        cin >> course;

        cout << "Enter Joining Date:\n";
        joiningDate.acceptDate();

        cout << "Enter End Date:\n";
        endDate.acceptDate();
    }

    void display() const {
        cout << "\nRoll No: " << rollNo;
        cout << "\nMarks: " << marks;
        cout << "\nCourse: " << course;
        cout << "\nJoining Date: ";
        joiningDate.displayDate();
        cout << "\nEnd Date: ";
        endDate.displayDate();
    }
};

// Main
int main() {
    Employee e;
    e.accept();
    e.display();

    cout << "\n----------------------\n";

    Student s;
    s.accept();
    s.display();

    return 0;
}              

