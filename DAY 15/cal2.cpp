#include <iostream>
using namespace std;

void calculator() {
    int choice;
    double a, b;

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        switch (choice) {
            case 1:
                if (a < 0 || b < 0)
                    throw "Addition numbers must not be negative";
                cout << "Result = " << a + b;
                break;

            case 2:
                if (a - b < 0)
                    throw "Subtraction result must not be negative";
                cout << "Result = " << a - b;
                break;

            case 3:
                if (a <= 0 || b <= 0)
                    throw "Multiplication values must be positive";
                cout << "Result = " << a * b;
                break;

            case 4:
                if (b == 0)
                    throw "Division denominator must not be zero";
                cout << "Result = " << a / b;
                break;

            default:
                throw "Invalid menu choice";
        }
    }
    catch (const char* msg) {
        cout << "Error: " << msg;
    }
}

int main() {
    calculator();
    return 0;
}

