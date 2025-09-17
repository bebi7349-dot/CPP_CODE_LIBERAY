#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // private data

public:
    BankAccount(int initial) { balance = initial; }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(1000);  // initial balance
    acc.deposit(500);
    acc.withdraw(300);
    cout << "Current Balance = " << acc.getBalance();
    return 0;
}
