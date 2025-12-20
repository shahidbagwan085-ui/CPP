#include <iostream>
using namespace std;

int main() {
    int n, digit, result = 0, place = 1;

    cout << "Enter a 5-digit number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;
        digit = (digit + 1) % 10;
        result = digit * place + result;
        place *= 10;
        n /= 10;
    }

    cout << "New number: " << result;
    return 0;
}