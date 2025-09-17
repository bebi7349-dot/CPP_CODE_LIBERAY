#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    r1.setValues(5, 3);
    cout << "Area = " << r1.area() << endl;
    return 0;
}
