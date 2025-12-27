#include <iostream>
using namespace std;

class Employee {
    int emp_id;
    string emp_name;
    float emp_sal;
    mutable float bonus;

public:
    Employee(int id, string name, float sal) {
        emp_id = id;
        emp_name = name;
        emp_sal = sal;
        bonus = 0;
    }

    void updateSalary(float sal) {
        emp_sal = sal;
    }

    void displayOutput() const {
        cout << "\nEmployee Details:\n";
        cout << "ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Salary: " << emp_sal << endl;
    }

    float getBonus() const {
        bonus = emp_sal * 0.10; 
        return bonus;
    }
};

int main() {
    const Employee e1(101, "Shahid", 50000);

    e1.displayOutput();
    cout << "Bonus: " << e1.getBonus() << endl;

    return 0;
}

