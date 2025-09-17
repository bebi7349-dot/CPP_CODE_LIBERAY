#include <iostream>
using namespace std;

int main() {
    int a = 5, b;

    cout << "Initial a = " << a << endl;

    // Pre-increment
    b = ++a;   // a is increased first, then assigned
    cout << "After b = ++a: a = " << a << ", b = " << b << endl;

    // Post-increment
    b = a++;   // a is assigned first, then increased
    cout << "After b = a++: a = " << a << ", b = " << b << endl;

    // Pre-decrement
    b = --a;   // a is decreased first, then assigned
    cout << "After b = --a: a = " << a << ", b = " << b << endl;

    // Post-decrement
    b = a--;   // a is assigned first, then decreased
    cout << "After b = a--: a = " << a << ", b = " << b << endl;

    return 0;
}
