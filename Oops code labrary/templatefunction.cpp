#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int Add: " << add<int>(5, 10) << endl;
    cout << "Double Add: " << add<double>(2.5, 3.5) << endl;
    return 0;
}
