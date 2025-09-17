#include <iostream>
using namespace std;

// Declaration
int add(int, int);

int main() {
    int result = add(5, 10); // Call
    cout << "Sum = " << result;
    return 0;
}

// Definition
int add(int a, int b) {
    return a + b;
}
