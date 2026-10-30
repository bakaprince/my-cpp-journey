#include <iostream>
using namespace std;

class Student {
	int x;
	string name;
	int cgpa;

public:
	Student(int t,string name,int cgpa) {
		x = t;
		this->name = name;
		this->cgpa = cgpa;
	}
	void display() {
		cout << x << '\n';
		cout << name<<'\n';
		cout << cgpa<<'\n';
	}
	friend void operator ==(Student &obj2,Student obj) {
		bool flag=(obj.name == obj2.name);
		cout << flag;
		
	}
};

int main() {
	Student s1(80, "sudeep", 10), s2(79, "Vikas", 9.999);
	

	s1.display();
	s2.display();
	s1==s2;

}
