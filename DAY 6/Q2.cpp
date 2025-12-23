#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b);

    return 0;
}

