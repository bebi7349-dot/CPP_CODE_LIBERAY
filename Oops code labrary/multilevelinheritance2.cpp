#include <iostream>
using namespace std;

class LivingBeing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Animal : public LivingBeing {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.breathe();  // from LivingBeing
    d.eat();      // from Animal
    d.bark();     // from Dog
    return 0;
}
