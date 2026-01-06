#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

  
    try {
    		if(choice<1 || choice >4){
		     throw	"entered choice is invalid.";			
			   }
			   
			    cout << "Enter two numbers: ";
             cin >> a >> b;
             
        switch (choice) {
        
            case 1:
                if (a < 0 || b < 0)
                    throw "Addition numbers must not be negative";
                cout << "Result = " <<  (a + b);
                break;

            case 2:
                if (a - b < 0)
                    throw "Subtraction result must not be negative";
                cout << "Result = " << a - b;
                break;

            case 3:
                if (a <= 0 || b <= 0)
                    throw "Multiplication values must be positive";
                cout << "Result = " << a * b;
                break;

            case 4:
                if (b == 0)
                    throw "Division denominator must not be zero";
                cout << "Result = " << a / b;
                break;

            }
        }
        
         catch (const char* msg) {
        cout << "Error: " << msg;
    }

    
    

    return 0;
}

