#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x; // reference to x

    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;

    ref = 20; // modifies x
    cout << "After changing ref, x = " << x << endl;
    return 0;
}
