#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    double salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
 
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Salary: " << salary << endl;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double s)
    {
        salary = s;
    }
};

int main()
{
    vector<Employee> employees;
    int choice;

    do
    {
        cout << "\n----- Employee Management Menu -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Employee Salary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Employee e;
            e.accept();
            employees.push_back(e);
            cout << "Employee Added Successfully!\n";
            break;
        }

        case 2:
        {
            if (employees.size() == 0)
            {
                cout << "No Employees Found!\n";
            }
            else
            {
                for (int i = 0; i < employees.size(); i++)
                {
                    employees[i].display();
                }
            }
            break;
        }

        case 3:
        {
            int searchId;
            cout << "Enter Employee ID to search: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < employees.size(); i++)
            {
                if (employees[i].getId() == searchId)
                {
                    employees[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 4:
        {
            int searchId;
            double newSalary;

            cout << "Enter Employee ID: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < employees.size(); i++)
            {
                if (employees[i].getId() == searchId)
                {
                    cout << "Enter New Salary: ";
                    cin >> newSalary;
                    employees[i].setSalary(newSalary);
                    cout << "Salary Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}

