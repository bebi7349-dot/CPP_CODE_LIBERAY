#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Some Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow Meow" << endl;
    }
};

int main() {
    Animal* arr[3];
    Animal a;
    Dog d;
    Cat c;

    arr[0] = &a;
    arr[1] = &d;
    arr[2] = &c;

    for(int i=0;i<3;i++)
        arr[i]->speak(); // dynamic dispatch

    return 0;
}
