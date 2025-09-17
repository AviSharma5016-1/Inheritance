#include<iostream>
using namespace std;

class Vehicle {
    public:
        string brand = "Ford";
        void color() {
            cout << "Vehicle color is Red" << endl;
        }
    };

    class Car: public Vehicle {
    public:
        string model = "Mustang";
        void speed() {
            cout << "Car speed is 200km/h" << endl;
        }
    };

int main() {
    Car myCar;
    myCar.color();
    myCar.speed();
    return 0;
}

// OUTPUT
// Vehicle color is Red
// Car speed is 200km/h
