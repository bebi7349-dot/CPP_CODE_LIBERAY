#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file("data.txt", ios::out); // write mode
    file << "Writing some data using fstream.\n";
    file.close();

    fstream fileRead("data.txt", ios::in); // read mode
    string line;
    while(getline(fileRead, line)) {
        cout << line << endl;
    }
    fileRead.close();
    return 0;
}

