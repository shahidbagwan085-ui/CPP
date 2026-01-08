  #include <iostream>
#include <string>
using namespace std;


class Employee
{
    string name;
    int id;
    double sal;
    string dept;

public:
    Employee() {}

    Employee(string name, int id, double sal, string dept)
    {
        this->name = name;
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    void display()
    {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << sal
             << ", Dept: " << dept << endl;
    }
};


struct Node
{
    Employee data;
    Node *next;

    Node(Employee e)
    {
        data = e;
        next = NULL;
    }
};


class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

   
    void addFirst(Employee e)
    {
        Node *newNode = new Node(e);
        newNode->next = head;
        head = newNode;
    }

   
    void deleteFirst()
    {
        if (head == NULL)
        {   
            cout << "List is empty. Nothing to delete." << endl;
            return;
        } 

        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "First employee deleted." << endl;
    }

    
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            temp->data.display();
            temp = temp->next;
        }
    }
};


int main()
{
    LinkedList list;
    int choice;

    do
    {
        cout << "\n1. Add Employee at Beginning";
        cout << "\n2. Display Employees";
        cout << "\n3. Delete First Employee";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name, dept;
            int id;
            double sal;

            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Salary: ";
            cin >> sal;
            cin.ignore();

            cout << "Enter Department: ";
            getline(cin, dept);

            Employee e(name, id, sal, dept);
            list.addFirst(e);
        }
        else if (choice == 2)
        {
            list.display();
        }
        else if (choice == 3)
        {
            list.deleteFirst();
        }

    } while (choice != 4);2

    return 0;
}

