#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt", ios::app); // append mode
    if(outFile.is_open()) {
        outFile << "Appending a new line.\n";
        outFile.close();
        cout << "Data appended successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}
