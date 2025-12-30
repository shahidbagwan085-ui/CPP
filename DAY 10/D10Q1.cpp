#include <iostream>
using namespace std;

class Array {
private:
    double *arr;
    int size;

public:
  
    Array(int s) {
        size = s;
        arr = new double[size];
    }

    
    void acceptRecord() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    
    void printRecord() {
        cout << "Array elements are:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    int linearSearch(double key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key)
                return i;
        }
        return -1;
    }


    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    Array a(n);

    a.acceptRecord();
    a.printRecord();

    double key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = a.linearSearch(key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found\n";

    return 0;
}

