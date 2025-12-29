#include <iostream>
using namespace std;

int main() {
    int size;

    
    cout << "Enter size of array: ";
    cin >> size;

   
    double* arr = new double[size]; //dynamic array

  
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Array elements are:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

  
    delete[] arr;    //Free

    return 0;
}

