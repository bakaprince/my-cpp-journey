#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
	int rollNo;
	string name;
	float marks;
public:
	void input() {
		cout << "Enter Roll number: ";
		cin >> rollNo;
		cout << "Enter Name:";
		cin >> name;
		cout << "Enter marks";
		cin >> marks;
	}
	void display() {
		cout << rollNo;
		cout << '\n' << name << endl;
		cout << marks << endl;
	}
	void writeData(ofstream& file) {
		file << rollNo << " " << name << " " << marks << endl;
	}
	void readData(ifstream& file) {
		file >> rollNo >> name >> marks;
	}
};
int main() {
	Student s;
	ofstream wfile("students.txt", ios::out);
	if (!wfile.is_open()) {
		return 1;
	}

	for (int i = 0;i < 5;i++) {
		s.input();
		s.writeData(wfile);
	}
	wfile.close();
	
	ifstream rfile("students.txt");

	while (!rfile.eof()) {
		s.readData(rfile);
		s.display();
	}
	rfile.close();
}
