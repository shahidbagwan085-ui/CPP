#include <iostream>
using namespace std;

int main() {
    int size;

  
    cout << "Enter size of array: ";
    cin >> size;

 
    double *arr = new double[size];

   
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

   
    cout << "Array elements are:\n";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;


    delete[] arr;

    return 0;
}

