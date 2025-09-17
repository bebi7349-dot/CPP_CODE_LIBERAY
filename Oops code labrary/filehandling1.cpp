#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt"); // open file for reading
    string line;

    if(inFile.is_open()) {
        while(getline(inFile, line)) { // read line by line
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}
