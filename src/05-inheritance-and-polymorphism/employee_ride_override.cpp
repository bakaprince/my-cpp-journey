#include <iostream>
using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	virtual void input() {
		cin >> name;
		cin >> salary;
	}
	virtual void display() {
		cout << name << '\n' << salary << endl;
	}
};
class Manager:public Employee {
	string dept;
public:
	void input() {
		Employee::input();
		cin >> dept;
	}
	void display() {
		Employee::display();
		cout << dept;
	}
};
int main() {
	Manager m;
	Employee* e = &m;

	e->input();
	e->display();
}