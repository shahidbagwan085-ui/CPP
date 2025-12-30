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

   
    Array(const Array &other) {
        size = other.size;
        arr = new double[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

   
    void acceptRecord() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

        void printRecord() const {
        cout << "Array elements are:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

   
    int linearSearch(double key) const {
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

    Array a1(n);
    a1.acceptRecord();

    
    Array a2 = a1;

    cout << "Original Array:\n";
    a1.printRecord();

    cout << "Copied Array:\n";
    a2.printRecord();

    return 0;
}

