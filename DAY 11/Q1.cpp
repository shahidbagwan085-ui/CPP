#include <iostream>
#include <cmath>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    void reduce() {
        int g = gcd(abs(numerator), abs(denominator));
        numerator /= g;
        denominator /= g;

       
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
   
    Rational(int n = 1, int d = 2) {
        if (d == 0) {
            cout << "Denominator cannot be zero. Setting to 1.\n";
            d = 1;
        }
        numerator = n;
        denominator = d;
        reduce();
    }

    Rational add(Rational r) {
        return Rational(
            numerator * r.denominator + r.numerator * denominator,
            denominator * r.denominator
        );
    }

    Rational subtract(Rational r) {
        return Rational(
            numerator * r.denominator - r.numerator * denominator,
            denominator * r.denominator
        );
    }

    Rational multiply(Rational r) {
        return Rational(
            numerator * r.numerator,
            denominator * r.denominator
        );
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Rational r1(3, 4);
    Rational r2(2, 5);

    cout << "Addition: ";
    r1.add(r2).display();

    cout << "Subtraction: ";
    r1.subtract(r2).display();

    cout << "Multiplication: ";
    r1.multiply(r2).display();

    return 0;
}

