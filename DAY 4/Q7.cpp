#include <iostream>
using namespace std;

struct Employee {
    int empId;
    string empName;
    float empSalary;
};

void acceptData(Employee &e) {
    cout << "Enter Employee ID: ";
    cin >> e.empId;
    cout << "Enter Employee Name: ";
    cin >> e.empName;
    cout << "Enter Employee Salary: ";
    cin >> e.empSalary;
}

void printEmpData(Employee e) {
    cout << "\nEmployee ID: " << e.empId;
    cout << "\nEmployee Name: " << e.empName;
    cout << "\nEmployee Salary: " << e.empSalary;
}

int main() {
    Employee e;
    acceptData(e);
    printEmpData(e);
    return 0;
}

 write a function lcm (a,b)that uses gcd (a,b)to compute the least common multiple 
given two positive int a and b lcm . of two no is the smallest 
no which can be divided by both no 
a*b= lcm (a,b)*gcd (a,b)
