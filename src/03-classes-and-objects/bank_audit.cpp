#include <iostream>
#include <string.h>
using namespace std;

class Bank {
private:
	int accNo;
	float Balance;
public:
	Bank(int an, float b) {
		accNo = an;
		Balance = b;
	}
	friend void Audit(Bank B1) {
		cout << "Account Number: " << B1.accNo << '\n' << "Balance: " << B1.Balance<<'\n';
		if (B1.Balance > 0) {
			cout << "Account Meets minimum balance criteria"<<'\n';
		}
		cout << "Add money to activate your account " << '\n';
	}
};

int main() {

	Bank B1(123, 342.5);
	Bank B2(122, -12);
	Audit(B1);
	Audit(B2);
}
