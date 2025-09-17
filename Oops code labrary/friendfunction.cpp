#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) { width = w; }

    // Friend function declaration
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box = " << b.width << endl; // can access private member
}

int main() {
    Box b1(10);
    printWidth(b1); // calling friend function
    return 0;
}
