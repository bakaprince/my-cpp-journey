#include <iostream>
using namespace std;
class Wallet {
    double money=0;
public:
    void deposit(double amount) {
        money += amount;
    }
    void withdraw(double amt) {
        if (money < amt) {
            
            throw "insufficient balance.";
        }
        else {
            money -= amt;
            cout << "Withdraw success."<<'\n';
            cout << "Remaining: "<< money << endl;
        }
    }
};
int main() {
    Wallet w;
    w.deposit(1000);
    try {
        w.withdraw(200);
    }
    catch (const char* msg) {
        cout << msg;
    }
}
