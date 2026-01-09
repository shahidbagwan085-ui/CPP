#include <iostream>
#include <string>
using namespace std;


class Account
{
protected:
    int accId;
    string accHolder;
    float balance;

public:
    Account()
    {
        accId = 0;
        accHolder = "";
        balance = 0;
    }

    Account(int accId, string accHolder, float balance)
    {
        this->accId = accId;
        this->accHolder = accHolder;
        this->balance = balance;
    }

    virtual void accept()
    {
        cout << "Enter Account ID: ";
        cin >> accId;

        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, accHolder);

        try
        {
            cout << "Enter Balance: ";
            cin >> balance;
            if (balance < 0)
                throw balance;
        }
        catch (...)
        {
            cout << "Exception: Balance cannot be negative!" << endl;
            balance = 0;
        }
    }

    virtual void display()
    {
        cout << "Account ID: " << accId << endl;
        cout << "Account Holder: " << accHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() = 0; // pure virtual
};

class SavingsAccount : public Account
{
    float interestRate;

public:
    SavingsAccount()
    {
        interestRate = 0;
    }

    void accept()
    {
        Account::accept();

        try
        {
            cout << "Enter Interest Rate: ";
            cin >> interestRate;
            if (interestRate < 0)
                throw interestRate;
        }
        catch (...)
        {
            cout << "Exception: Interest rate cannot be negative!" << endl;
            interestRate = 0;
        }
    }

    void calculateInterest()
    {
        balance = balance + (balance * interestRate / 100);
    }

    void display()
    {
        calculateInterest();
        Account::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

	
class CurrentAccount : public Account
{
    float serviceCharge;

public:
    CurrentAccount()
    {
        serviceCharge = 0;
    }

    void accept()
    {
        Account::accept();
        cout << "Enter Service Charge: ";
        cin >> serviceCharge;
    }

    void calculateInterest()
    {
        balance = balance - serviceCharge;
    }

    void display()
    {
        calculateInterest();
        Account::display();
        cout << "Service Charge: " << serviceCharge << endl;
    }
};

	
int main()
{
    SavingsAccount s;
    CurrentAccount c;
    Account* ptr = NULL;

    int choice;
    do
    {
        cout << "\n------ MENU ------\n";
        cout << "1. Enter Savings Account Details\n";
        cout << "2. Enter Current Account Details\n";
        cout << "3. Display Savings Account\n";
        cout << "4. Display Current Account\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ptr = &s;   // upcasting
            ptr->accept();
            break;

        case 2:
            ptr = &c;   // upcasting
            ptr->accept();
            break;

        case 3:
            ptr = &s;
            ptr->display();
            break;

        case 4:
            ptr = &c;
            ptr->display();
            break;

        case 5:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
