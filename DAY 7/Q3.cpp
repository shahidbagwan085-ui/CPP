#include <iostream>
using namespace std;


float add(int a, int b, int c, float d) {
    return a + b + c + d;
}


float add(int a, int b, float c, float d) {
    return a + b + c + d;
}


float add(int a, float b, float c, float d) {
    return a + b + c + d;
}


int add(int a, int b, int c, int d) {
    return a + b + c + d;
}


float add(float a, float b, float c, float d) {
    return a + b + c + d;
}


float add(char a, float b, float c, float d) {
    return a + b + c + d;   
}

int main() {

    cout << "3 int + 1 float = " << add(1, 2, 3, 4.5f) << endl;
    cout << "2 int + 2 float = " << add(1, 2, 3.5f, 4.5f) << endl;
    cout << "1 int + 3 float = " << add(1, 2.5f, 3.5f, 4.5f) << endl;
    cout << "4 int = " << add(1, 2, 3, 4) << endl;
    cout << "4 float = " << add(1.1f, 2.2f, 3.3f, 4.4f) << endl;
    cout << "1 char + 3 float = " << add('A', 1.5f, 2.5f, 3.5f) << endl;

    return 0;
}

