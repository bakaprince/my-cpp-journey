#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
	int empID;
	string name;
	double salary;
public:
	void insertData() {
		ofstream wfile("employee.txt", ios::app);
		if (!wfile.is_open()) {
			cout << "error opening the file." << endl;
			return;
		}
		int i = 5;
		while (i > 0) {
			cout << "Enter Employee ID,Name,Salary: ";
			cin >> empID >> name >> salary;

			wfile << empID << " " << name << " " << salary << endl;
			i -= 1;
		}
		wfile.close();
		cout << "Success"<<endl;
	}
	void fetchData() {
		string s;
		ifstream rfile("employee.txt");
		if (!rfile.is_open()) {
			cout << "error opening the file";
			return;
		}
		cout << "\n--- Employee Details ---\n";
		while (getline(rfile,s)) {
			cout << s << endl;
		}
		rfile.close();
	}
};
int main() {
	Employee e;
	e.fetchData();
}