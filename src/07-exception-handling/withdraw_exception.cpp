#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int a, string b, double c) {
        accountNumber = a;
        accountHolderName = b;
        balance = c;
    }

    void withdraw(double amt) {
        if (amt > balance) {
            throw "Withdrawal amount is greater than available balance";
        }

        balance -= amt;
        cout << "Remaining Balance: " << balance;
    }
};

int main() {

    BankAccount B1(101, "Sudeep", 452.4);

    try {
        B1.withdraw(20);
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}