#include <iostream>
using namespace std;


class Employee {
protected:
    int id;
    double salary;

public:
    Employee() {
        id = 0;
        salary = 0;
    }

    void accept() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};


class Manager : virtual public Employee {
protected:
    double bonus;

public:
    Manager() {
        bonus = 0;
    }

    void accept() {
        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};


class Salesman : virtual public Employee {
protected:
    double commission;

public:
    Salesman() {
        commission = 0;
    }

    void accept() {
        Employee::accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display() {
        Employee::display();
        cout << "Commission: " << commission << endl;
    }
};


class SalesManager : public Manager, public Salesman {
public:
    void accept() {
        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display() {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
    }
};


int main() {
    Manager managers[10];
    Salesman salesmen[10];
    SalesManager salesManagers[10];

    int mCount = 0, sCount = 0, smCount = 0;
    int choice;

    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Add Manager\n";
        cout << "2. Add Salesman\n";
        cout << "3. Add SalesManager\n";
        cout << "4. Display Count (Designation wise)\n";
        cout << "5. Display All Managers\n";
        cout << "6. Display All Salesmen\n";
        cout << "7. Display All SalesManagers\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            managers[mCount].accept();
            mCount++;
            break;

        case 2:
            salesmen[sCount].accept();
            sCount++;
            break;

        case 3:
            salesManagers[smCount].accept();
            smCount++;
            break;

        case 4:
            cout << "\nManager Count      : " << mCount << endl;
            cout << "Salesman Count     : " << sCount << endl;
            cout << "SalesManager Count : " << smCount << endl;
            break;

        case 5:
            cout << "\n--- Managers ---\n";
            for (int i = 0; i < mCount; i++) {
                managers[i].display();
                cout << "----------------\n";
            }
            break;

        case 6:
            cout << "\n--- Salesmen ---\n";
            for (int i = 0; i < sCount; i++) {
                salesmen[i].display();
                cout << "----------------\n";
            }
            break;

        case 7:
            cout << "\n--- SalesManagers ---\n";
            for (int i = 0; i < smCount; i++) {
                salesManagers[i].display();
                cout << "----------------\n";
            }
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}

