#include <iostream>
using namespace std;

class TechnicalCertification {
protected:
	int numberOfCertificate;
public:
	TechnicalCertification(int n) {
		numberOfCertificate = n;
	}
	virtual void display() {
		cout << numberOfCertificate;
	}
	
};
class Project {
protected:
	string Title;
	int ProjectID;
public:
	Project(string t, int id) {
		Title = t;
		ProjectID = id;
	}
	virtual void display() {
		cout << Title;
		cout << ProjectID;
	}
};
class Interface :public TechnicalCertification, public Project {
public:
	Interface(int n,string t,int id) :TechnicalCertification(n), Project(t,id){
	}
	void display() {
		TechnicalCertification::display();
		cout << endl;
		Project::display();
		cout << endl;
	}

};
int main() {
	Interface I(3, "AI Project", 101);
	I.display();
	return 0;
}