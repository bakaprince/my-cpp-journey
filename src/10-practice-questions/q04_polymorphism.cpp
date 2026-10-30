#include <iostream>
#include <string>
using namespace std;

class Student {
	int roll;
	string name;

public:
	void input(int r, string n) {
		roll = r;
		name = n;
	}
	virtual void display() {
		cout << "Name: " << name<<'\n';
		cout << "RollNumber: " << roll<<endl;
	}
};
class ResearchStudent : public Student {
	string topic;
public:
	void input(string t) {
		topic = t;
	}
	void display() {
		Student::display();
		cout << "Topic:" << topic << endl;
	}

};
int main() {
	ResearchStudent r;
	Student* s = &r;

	s->input(1, "Sudeep");
	r.input("Anime");

	s->display();
	return 0;
}
