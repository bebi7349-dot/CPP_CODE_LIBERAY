#include <iostream>
using namespace std;

int checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return 1; // return 1 if even
    }
    return 0; // return 0 if odd
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (checkEvenOdd(n))
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}
