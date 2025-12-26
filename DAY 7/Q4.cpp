#include <iostream>
using namespace std;

inline bool is_even(int num) {
    return (num % 2 == 0);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (is_even(n))
        cout << "Number is Even";
    else
        cout << "Number is Odd";

    return 0;
}

