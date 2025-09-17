#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // Logical AND
    if (a > 0 && b > 0)
        cout << "Both a and b are positive" << endl;

    // Logical OR
    if (a > 0 || b < 0)
        cout << "At least one condition is true" << endl;

    // Logical NOT
    if (!(a < 0))
        cout << "a is not negative" << endl;

    return 0;
}
