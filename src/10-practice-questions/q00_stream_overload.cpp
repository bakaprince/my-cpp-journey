#include <iostream>
using namespace std;

class Student {
	string name;
	int rollno;
	int marks;
public:
	friend istream& operator >>(istream& input, Student& S) {
		input >> S.name;
		input >> S.rollno;
		input >> S.marks;

		return input;
	}
	friend ostream& operator <<(ostream& out, Student s) {
		out << "Name: " << s.name << '\n';
		out << "Roll:" << s.rollno << '\n';
		out << "Marks: " << s.marks << '\n';

		return out;
	}
};
int main() {
	Student s1;
	cin >> s1;
	cout << s1;
	return 0;
}