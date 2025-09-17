#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void greet() {
        cout << "Hello, " << name << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice";

    Student *ptr = &s; // pointer to object
    ptr->greet();      // access member using ->
    return 0;
}
