#include <iostream>
using namespace std;

class Teacher {
protected:
	string subjects;
	int TeachingExperience;
public:
	void input(string a, int b) {
		subjects = a;
		TeachingExperience = b;
	}
	void display() {
		cout << subjects << '\n';
		cout << TeachingExperience << '\n';
	}

};
class Administration {
protected:
	string Designation;
	int AdministrativeExperience;
public:
	void input(string a, int b) {
		Designation = a;
		AdministrativeExperience = b;
	}
	void display() {
		cout << Designation << '\n';
		cout << AdministrativeExperience << '\n';
	}

};
class Faculty :public Teacher, public Administration {
public:
	void display() {
		
	}
};
int main() {

}