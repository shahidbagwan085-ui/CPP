#include <iostream>
using namespace std;

int add(int a, int b)
{ 
return a + b; 
}
int sub(int a, int b)
{
 return a - b; 
}
int mul(int a, int b) 
{
 return a * b; 
}
float divi(int a, int b) 
{
 return (float)a / b;
}

int main() 
{
    int a, b, choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "1.Add  2.Sub  3.Multiply  4.Divide: ";
    cin >> choice;

    if (choice == 1)
        cout << add(a, b);
    else if (choice == 2)
        cout << sub(a, b);
    else if (choice == 3)
        cout << mul(a, b);
    else if (choice == 4)
        cout << divi(a, b);

    return 0;
}
