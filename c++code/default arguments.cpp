#include <iostream>
using namespace std;

void display(string name = "Guest") {
    cout << "Hello, " << name << endl;
}

int main() {
    display("Alice");
    display(); // default used
    return 0;
}
