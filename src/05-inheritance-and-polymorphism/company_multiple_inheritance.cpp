#include <iostream>
using namespace std;

class TechnicalSkill {
protected:
	string skills;
	int empID;
public:
	TechnicalSkill(int e, string s) {
		empID = e;
		skills = s;
	}
	void display() {
		cout << empID << '\n';
		cout << skills << '\n';
	}
};
class Projects {
protected:
	string projects;
	int empID;
public:
	Projects(string p) {
		projects = p;
	}
	void display() {
		cout << projects << 'n';
	}
};
class Senior :public Projects, public TechnicalSkill {
public:
	Senior(int e1, string s,string p)
		: TechnicalSkill(e1, s), Projects(p) {
	}
	void displaySkills() {
		TechnicalSkill::display();
	}
	void displayProjects() {
		Projects::display();
	}
};

int main() {
	Senior S(101,"Python","Ai/ml based");
	S.displaySkills();
	S.displayProjects();


}