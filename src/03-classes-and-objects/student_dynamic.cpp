#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
using namespace std;

class Student {
	private:
		int rollNo;
		char* name;
		int length;
	public :
		Student(int rn,const char* n) {
			rollNo = rn;
			length = strlen(n);
			name = new char[length + 1];
			strcpy(name, n);
		}
		void display() {
			cout << "Name: " << name << '\n'<<"Roll Number: " << rollNo<<'\n';
		}
		~Student() { 
			delete[] name;
			cout << "Memory is deleted for the student object.";
		}
};
int main() {
	char name[100];
	int roll;

	cout << "Enter Name: "; 
	cin >> name;

	cout << "Enter Roll Number: ";
	cin >> roll;

	Student s1(roll,name);
	Student s2(36, "Sudeep");
	s1.display();
	s2.display();
	return 0;
}