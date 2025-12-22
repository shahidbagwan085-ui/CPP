#include <iostream>
using namespace std;

inline double CtoF(double c) {
    return (c * 9 / 5) + 32;
}

inline double FtoC(double f) {
    return (f - 32) * 5 / 9;
}

inline int myMin(int a, int b) {
    return (a < b) ? a : b;
}

inline double simpleInterest(double p, double r, double t) {
    return (p * r * t) / 100;
}

inline double amount(double p, double r, double t) {
    return p + simpleInterest(p, r, t);
}

int main() {
    cout << "Celsius to Fahrenheit: " << CtoF(25) << endl;
    cout << "Fahrenheit to Celsius: " << FtoC(77) << endl;
    cout << "Minimum: " << myMin(10, 20) << endl;
    cout << "Simple Interest: " << simpleInterest(1000, 5, 2) << endl;
    cout << "Amount: " << amount(1000, 5, 2) << endl;

    return 0;
}
