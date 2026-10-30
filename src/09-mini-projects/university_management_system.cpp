#include <iostream>
using namespace std;

class studentInfo {
protected:
	int roll;
	string name;
public:
	studentInfo(int r, string n) {
		roll = r;
		name = n;
	}
	void display() {
		cout << "Roll Number: " << roll << '\n';
		cout << "Name: " << name << '\n';
	}
};
class examInfo {
protected:
	int marks;
	int admitCardId;
public:
	examInfo(int m, int a) {
		marks = m;
		admitCardId = a;
	}
	void display() {
		cout << "Marks: " << marks << '\n';
		cout << "admitCardId: " << admitCardId << '\n';
	}
};
class University :public studentInfo,public examInfo{
	
public:
	University(int r,string n,int m,int a)
		:studentInfo(r,n),examInfo(m,a){
	}
	void display() {
		studentInfo::display();
		examInfo::display();
	}
};
int main() {
	University U1(101, "Sudeep", 98, 918);

	U1.display();
}