#include <iostream>
using namespace std;

class Cylinder {
    double radius;
    double height;
    const double pi;

public:
    // Default Constructor
    Cylinder() : pi(3.14159) {
        radius = 0;
        height = 0;
    }

	void accept( )
{
	cout <<" enter the value for radius and height  "<< endl;
	cin>>radius>>height ;
}

    Cylinder(double r, double h) : pi(3.14159) {
        radius = r;
        height = h;
    }

    void setRadius(double r) {
        radius = r;
    }

    void setHeight(double h) {
        height = h;
    }

    double getRadius() const {
        return radius;
    }

    double getHeight() const {
        return height;
    }

    double calculateVolume() const {
        return pi * radius * radius * height;
    }
};

int main() {
    Cylinder c1;
    c1.accept();
    cout<< "Volume of Cylinder: " << c1.calculateVolume() << endl;
    return 0;
}

