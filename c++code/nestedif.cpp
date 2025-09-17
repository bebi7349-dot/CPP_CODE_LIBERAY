#include <iostream>
using namespace std;

int main() {
    int pin, amount, balance = 5000;

    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == 1234) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            cout << "Withdrawal successful! Remaining balance = " << balance - amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    } else {
        cout << "Invalid PIN!" << endl;
    }

    return 0;
}
