#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    int area(); // declaration
};

// Definition outside class
int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r;
    r.length = 4;
    r.width = 6;
    cout << "Area = " << r.area() << endl;
    return 0;
}
