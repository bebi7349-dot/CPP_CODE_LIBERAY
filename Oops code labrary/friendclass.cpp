#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) { width = w; }

    // Declare friend class
    friend class BoxPrinter;
};

class BoxPrinter {
public:
    void showWidth(Box b) {
        cout << "Width of box = " << b.width << endl; // access private member
    }
};

int main() {
    Box b1(15);
    BoxPrinter printer;
    printer.showWidth(b1); // friend class accessing private member
    return 0;
}


