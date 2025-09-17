#include <iostream>
using namespace std;

class Vehicle {
public:
    void fuel() {
        cout << "This vehicle needs fuel." << endl;
    }
};

class Car : public Vehicle {
public:
    void wheels() {
        cout << "Car has 4 wheels." << endl;
    }
};

class Bike : public Vehicle {
public:
    void wheels() {
        cout << "Bike has 2 wheels." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.fuel();
    c.wheels();

    b.fuel();
    b.wheels();

    return 0;
}
