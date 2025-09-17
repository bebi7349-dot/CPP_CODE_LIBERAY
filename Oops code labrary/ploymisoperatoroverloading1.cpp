#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r=0, int i=0) : real(r), imag(i) {}

    Complex operator + (Complex const &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1 + c2; // overloaded +
    c3.display();
    return 0;
}
