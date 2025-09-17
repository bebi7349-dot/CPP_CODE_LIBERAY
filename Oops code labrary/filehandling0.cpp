#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt"); // create file or open
    if(outFile.is_open()) {
        outFile << "Hello, C++ File Handling!\n";
        outFile << "This is a test file.\n";
        outFile.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}
