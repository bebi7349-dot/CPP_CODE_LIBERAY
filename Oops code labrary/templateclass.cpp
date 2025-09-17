#include <iostream>
using namespace std;

// Class template
template <class T>
class Box {
private:
    T value;
public:
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

int main() {
    Box<int> b1;
    b1.setValue(100);
    cout << "Int Value: " << b1.getValue() << endl;

    Box<string> b2;
    b2.setValue("Hello");
    cout << "String Value: " << b2.getValue() << endl;

    return 0;
}

