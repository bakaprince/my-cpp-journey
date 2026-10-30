#include <iostream>
using namespace std;

class Student {
	int rollNumber;
	string name;
	int marks;
public:
	friend istream& operator >> (istream& in, Student& s) {
		in >> s.rollNumber;
		in >> s.name;
		in >> s.marks;
		return in;
	}
	friend ostream& operator << (ostream& out, Student s) {
		out << "RollNumber: " << s.rollNumber << '\n';
		out << "Name: " << s.name << '\n' ;
		out << "Marks: " << s.marks << '\n';

		return out;
	}
};
int main() {
	Student  S;
	cout << "Enter RollNumber, Name, Marks: "<<'\n';
	cin >> S;
	cout << S;
	return 0;
}