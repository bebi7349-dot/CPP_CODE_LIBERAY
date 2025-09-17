#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        if (s > 0)
            salary = s;
        else
            cout << "Invalid Salary!" << endl;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e1;
    e1.setSalary(50000);
    cout << "Employee Salary = " << e1.getSalary() << endl;

    e1.setSalary(-2000);  // invalid input
    return 0;
}
