#include <iostream>
using namespace std;

int main() {
    int n = 1;

start:  // label
    cout << n << " ";
    n++;
    if (n <= 5) {
        goto start; // jumps back to label
    }

    return 0;
}
