#include <iostream>
using namespace std;

class PaymentApp {
public:
	virtual void process() {
		cout << "Success" << endl;
	}
};
class UPI :public PaymentApp {
public:
	void process() {
		cout << "UPI payment" << endl;
	}
};
class Card :public PaymentApp {
public:
	void process() {
		cout << "Card payment" << endl;
	}
};
int main() {
	PaymentApp* ptr;
	UPI u;
	Card c;

	ptr = &u;
	ptr->process();

	ptr = &c;
	ptr->process();
}
