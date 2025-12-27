#include <iostream>
using namespace std;

class Chair {
    int height;
    int width;
    static double price;
    string color;

public:
    
    Chair() {
        height = 0;
        width = 0;
        price = 0.0;
        color = "NA";
    }

   
    Chair(int h, int w, double p, string c) {
        height = h;
        width = w;
        price = p;
        color = c;
    }

   
    void input() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter color: ";
        cin >> color;
    }

 
    void display() {
        cout << "\nChair Details:\n";
        cout << "Height: " << height << endl;
        cout << "Width: " << width << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
    }

   
    static void setPrice( double p) {
    	price = p;
    }

   
    ~Chair() {
        cout << "\nChair object destroyed\n";
    }
};
 double Chair::price = 10500;
int main() {
    Chair c1;
    c1.input();
    c1.display();
    c1.setPrice(10800);
    c1.display();
    return 0;
}

