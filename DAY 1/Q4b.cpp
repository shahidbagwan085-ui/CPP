#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    swap(&a, &b);

    cout << "After swap: " <<endl;
    cout <<  "first no." <<a<<endl;
    cout << "second no." <<b<<endl;
    return 0;
}
