#include <iostream>
using namespace std;

class StudentRecord {
protected:
	int registerationNumber;
	string name;
public:
	StudentRecord(int a, string b) {
		registerationNumber = a;
		name = b;
		cout << "Student Record Constructor."<<endl;
	}
	~StudentRecord(){
		cout << "Student Record Destructor"<<endl;
	}
};
class HostelInfo {
protected:
	int Block;
	char Wing;
public:
	HostelInfo(int a, char b) {
		Block = a;
		Wing = b;
		cout << "Hostel Info Constructor"<<endl;
	}
	~HostelInfo() {
		cout << "Hostel Info Destructor"<<endl;
	}

};
class Student :public StudentRecord, public HostelInfo {
public:
	Student(int r, string n, int b, char w) :StudentRecord(r, n), HostelInfo(b, w) {
		cout << "Student Constructor"<<endl;
	}
	~Student() {
		cout << "Student Destructor"<<'\n';
	}

};
int main() {
	Student S1(101, "Sudeep", 5, 'A');
}