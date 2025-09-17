#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
private:
    string name;
};

// Derived class 1 (Single/Multilevel)
class Employee : public Person {
public:
    void setSalary(int s) { salary = s; }
    void showSalary() { cout << "Salary: " << salary << endl; }
private:
    int salary;
};

// Derived class 2 (Multiple Inheritance)
class Manager : public Employee {
public:
    void setDepartment(string d) { department = d; }
    void showDepartment() { cout << "Department: " << department << endl; }
private:
    string department;
};

// Another base class
class Sports {
public:
    void setSport(string s) { sport = s; }
    void showSport() { cout << "Favorite Sport: " << sport << endl; }
private:
    string sport;
};

// Hybrid class (Multiple inheritance + Multilevel)
class TeamLead : public Manager, public Sports {
public:
    void introduce() {
        showName();
        showSalary();
        showDepartment();
        showSport();
    }
};

int main() {
    TeamLead tl;

    tl.setName("Alice");
    tl.setSalary(80000);
    tl.setDepartment("IT");
    tl.setSport("Tennis");

    tl.introduce();

    return 0;
}
