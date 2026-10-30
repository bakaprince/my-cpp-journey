#include <iostream>
using namespace std;

class Student {
	int roll=0;
	string name;
public:
	void input() {
		cout << "Enter name and roll number: ";
		cin >> name >> roll;
	}
	void display() {
		cout << name << endl;
		cout << roll << endl;
	}
};
class Test {
protected:
	int m1;
	int m2;
	int m3;
public:
	void input() {
		cout << "enter marks:";
		cin >> m1 >> m2 >> m3;
	}
	void display() {
		cout << m1 << '\n' << m2 << '\n' << m3 << endl;
	}
};
class Result :public Student, public Test {
	int sum = 0;
public:
	void display() {
		Student::display();
		Test::display();
		sum = m1 + m1 + m3;
		cout << "Total Marks: " << sum << endl;
	}
};

int main() {
	Student s;
	Test t;
	Result r;

	r.Student::input();
	r.Test::input();

	r.display();
}