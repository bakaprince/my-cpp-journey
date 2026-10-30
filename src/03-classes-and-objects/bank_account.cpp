#include <iostream>
using namespace std;

class BankAccount {
private:
	int accountNumber;
	string accountHolderName;
	float balance;

public:
	BankAccount(int n, string m, float b) {
		this->accountNumber = n;
		this->accountHolderName = m;
		this->balance = b;
	}
	void createAccount() {
		cout << "Enter account number: ";
		cin >> accountNumber;
		cout << "account Hoder Name:";
		cin >> accountHolderName;
		cout << "balance";
		cin >> balance;
		BankAccount(accountNumber, accountHolderName, balance);
	}
	void deposit(int amount) {
		this->balance += amount;
	}
	void withdraw(int amount) {
		if (amount > balance) {
			cout << "Insufficient Balance";
		}
		else {
			this->balance -= amount;
		}
	}
	void display() {
		cout << "AccountNumber: " << accountNumber << '\n' << "AccountHolderName: " << accountHolderName << '\n' << "balance: " << balance;
	}
	~BankAccount() {
		cout << "Object is destroyed\n";
	}
};

int main() {
	BankAccount acc(101, "Alice", 5000.0f);
	acc.display();
	cout << "\n\nDepositing 1500...\n";
	acc.deposit(1500);
	acc.display();
	cout << "\n\nWithdrawing 2000...\n";
	acc.withdraw(2000);
	acc.display();
	cout << "\n";
	return 0;
}
