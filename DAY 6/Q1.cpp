#include <iostream>
#include <cmath>
using namespace std;

double gcd(double a, double b) {
    while (b != 0) {
        double temp = b;
        b = fmod(a, b);
        a = temp;
    }
    return a;
}

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}
