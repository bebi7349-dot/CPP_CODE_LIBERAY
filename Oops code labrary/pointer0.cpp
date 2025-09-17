#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p;    // pointer declaration
    p = &x;    // store address of x

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value stored in pointer p = " << p << endl;
    cout << "Value pointed by p = " << *p << endl; // dereferencing
    return 0;
}
