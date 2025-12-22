#include <iostream>
using namespace std;

int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int result = add(1, 2, 3, 4);
    cout << "Sum = " << result;
    return 0;
}
