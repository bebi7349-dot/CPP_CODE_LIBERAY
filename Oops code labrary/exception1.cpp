#include <iostream>
using namespace std;

int main() {
    try {
        int x = -5;
        if(x > 0)
            cout << "Positive number" << endl;
        else
            throw x;  // throw integer exception
    }
    catch (int e) {
        cout << "Exception: Negative number " << e << endl;
    }
    catch (...) { // catch any other exception
        cout << "Unknown exception" << endl;
    }
    return 0;
}
