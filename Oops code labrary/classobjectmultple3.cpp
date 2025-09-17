#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void setData(string n, int s) {
        name = n;
        salary = s;
    }

    void display() {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.setData("John", 50000);
    e2.setData("Emma", 60000);

    e1.display();
    e2.display();

    return 0;
}
