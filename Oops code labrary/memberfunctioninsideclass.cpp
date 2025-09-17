#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    // Member function
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.length = 5;
    r.width = 3;
    cout << "Area = " << r.area() << endl; // call member function
    return 0;
}
