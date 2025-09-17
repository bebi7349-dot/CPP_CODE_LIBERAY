#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Alice");
    Student s2("Bob");
    s1.display();
    s2.display();
    return 0; // destructors called automatically here
}
