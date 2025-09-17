#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // private data

public:
    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks!" << endl;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;
    s1.setMarks(85);
    cout << "Marks = " << s1.getMarks() << endl;
    return 0;
}
