#include <iostream>
using namespace std;

class Student {
protected:
	int roll;
	string name;
public:
	Student(int r, string n) {
		roll = r;
		name = n;
	}
	void display() {
		cout << roll << '\n';
		cout << name << '\n';
	}
};
class SportStudent :public Student {
	string sport;
public:
	SportStudent(int r, string n, string s) :Student(r, n) {
		sport = s;
	}
	void display() {
		Student::display();
		cout << sport << '\n';
	}
};
class CulturalStudent :public Student {
	string activity;
public:
	CulturalStudent(int r, string n, string a) :Student(r, n) {
		activity = a;
	}
	void display() {
		Student::display();
		cout << activity << '\n';
	}
};
int main() {
	SportStudent S1(1, "Sudeep", "Football");
	CulturalStudent S2(2, "Vikas", "Pottery");

	S1.display();
	S2.display();
}