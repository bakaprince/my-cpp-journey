#include <iostream>
using namespace std;


class Account {
    double balance;
public:
    Account(double i) {
        balance = i;
    }
    void withdraw(double amt) {
        if (amt < 0) {
            throw "Amount must be greater than 0";
        }
        else if (balance < amt) {
            throw "Aukaat mei bheek maang";
        }
        else {
            balance -= amt;
            cout << "Withdraw Successful " << '\n';
            cout << "Balance :" << balance;
        }
    }
};

int main() {
    Account A1(100);

    try {
        A1.withdraw(500);
    }
    catch (const char* msg) {
        cout << msg;
    }
}