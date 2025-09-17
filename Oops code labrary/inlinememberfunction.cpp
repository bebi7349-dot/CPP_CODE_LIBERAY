#include <iostream>
using namespace std;

class Square {
private:
    int side;

public:
    Square(int s) { side = s; }

    inline int area() { return side * side; } // inline function
};

int main() {
    Square s(4);
    cout << "Area = " << s.area() << endl;
    return 0;
}
