#include <iostream>
using namespace std;

class Student {
private:
	int rollNumber;
	string name;
	int marks;

public:
	Student(int rn,string n,int m) {
		this->rollNumber = rn;
		this->name = n;
		this->marks = m;
	}

	Student(const Student& s) {
		rollNumber = s.rollNumber;
		name = s.name;
		marks = s.marks;
	}
	void display() {
		cout << "Student Name: " << name << '\n';
		cout << "Roll number: " << rollNumber << '\n';
		cout << "Marks: " << marks<<'\n';
	}

	~Student() {
		cout << "Student successfully deleted";
	}


}; 
int main() {
	Student s1(10067, "Sudeep Kushwaha", 100);

	Student s2(s1);

	s1.display();
	s2.display();


}