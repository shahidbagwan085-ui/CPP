#include <iostream>
#include <string>  


using namespace std;


class BankingException {
    string message;

public:
    BankingException(string msg) {
        message = msg;
    }

    string what() {
        return message;
    }
};


class BankAccount {
    double balance;

public:
    
    BankAccount(double bal) {
        if (bal < 2000)
            throw BankingException("balance should be min 2000 and above");
        balance = bal;
    }

    
    void deposit(double amt) {
        if (amt < 0)
            throw BankingException("deposit value should not be negative value");
        balance += amt;
    }

   
    void withdraw(double amt) {
        balance -= amt;
        if (balance < 2000)
            throw BankingException("maintain minimum balance 2000");
    }

    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    try {
        double bal, dep, wit;

        cout << "Enter initial balance: ";
        cin >> bal;

        BankAccount acc(bal);

        cout << "Enter deposit amount: ";
        cin >> dep;
        acc.deposit(dep);

        cout << "Enter withdrawal amount: ";
        cin >> wit;
        acc.withdraw(wit);

        acc.display();
    }
    catch (BankingException e) {
        cout << "Banking Error: " << e.what();
    }

    return 0;
}

