#include <iostream>
using namespace std;

class employee {
protected:
    int id;
    double sal;

public:
    employee() {
        id = 0;
        sal = 0;
    }

    void accept() {
        cout << "Enter Employee ID and Salary: ";
        cin >> id >> sal;
    }

    void display() {
        cout << "ID: " << id << " Salary: " << sal << endl;
    }

    int getid() {
        return id;
    }

    double getsal() {
        return sal;
    }

    void setsal(double s) {
        sal = s;
    }
};

class manager : virtual public employee {
protected:
    double bonus;

public:
    manager() {
        bonus = 0;
    }

    void acceptManager() {
        cout << "Enter Manager Bonus: ";
        cin >> bonus;
    }

    void displayManager() {
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : virtual public employee {  00.

protected:
    double commission;

public:
    Salesman() {
        commission = 0;
    }

    void acceptSalesman() {
        cout << "Enter Salesman Commission: ";
        cin >> commission;
    }

    void displaySalesman() {
        cout << "Commission: " << commission << endl;
    }
};

class SalesManager : public manager, public Salesman {
public:
    SalesManager() {
        cout << "SalesManager constructor called" << endl;
    }

    void accept() {
        employee::accept();
        acceptManager();
        acceptSalesman();
    }

    void display() {
        employee::display();
        displayManager();
        displaySalesman();
    }
};

int main() {
    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}

