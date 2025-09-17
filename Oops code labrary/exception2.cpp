#include <iostream>
using namespace std;

int main() {
    try {
        char choice = 'A';
        if(choice == 'A') throw 100;
        else if(choice == 'B') throw 3.14;
        else throw "Unknown";
    }
    catch (int x) {
        cout << "Integer exception: " << x << endl;
    }
    catch (double y) {
        cout << "Double exception: " << y << endl;
    }
    catch (const char* s) {
        cout << "String exception: " << s << endl;
    }
    return 0;
}
