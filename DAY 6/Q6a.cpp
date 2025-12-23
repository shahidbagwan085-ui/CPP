#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string pwd;
    cin >> pwd;

    bool digit = false, lower = false, upper = false, special = false;

    if (pwd.length() < 8) {
        cout << "Invalid";
        return 0;
    }

    for (int i = 0; i < pwd.length(); i++) {
        char c = pwd[i];
        if (isdigit(c)) digit = true;
        else if (islower(c)) lower = true;
        else if (isupper(c)) upper = true;
        else special = true;
    }

    if (digit && lower && upper && special)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}

