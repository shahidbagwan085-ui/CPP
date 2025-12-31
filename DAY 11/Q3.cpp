#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Member function to compare students
    void compare_Students(Student s) {
        if (marks > s.marks)
            cout << name << " has higher marks" << endl;
        else if (marks < s.marks)
            cout << s.name << " has higher marks" << endl;
        else
            cout << "Both students have equal marks" << endl;
    }

    // Friend function declaration
    friend void compareStudents(Student s1, Student s2);
};

// Friend function definition
void compareStudents(Student s1, Student s2) {
    if (s1.marks > s2.marks)
        cout << s1.name << " has higher marks" << endl;
    else if (s1.marks < s2.marks)
        cout << s2.name << " has higher marks" << endl;
    else
        cout << "Both students have equal marks" << endl;
}

int main() {
    Student s1("Aman", 85);
    Student s2("Rohit", 90);

    cout << "Using Friend Function: ";
    compareStudents(s1, s2);

    cout << "Using Member Function: ";
    s1.compare_Students(s2);

    return 0;
}

