#include <iostream>
using namespace std;

template<class T>
class BasicInfo {
protected:
	string name;
	T cgpa1;
public:
	BasicInfo(string nam,T n) {
		name = nam;
		cgpa1 = n;
	}
	void show() {
		cout << name <<'\n';
		cout << cgpa1 << '\n';
	}
};
template<typename T>
class Completeinfo :public BasicInfo<T> {
	T cgpa2;
	T sgpa;
public:
	Completeinfo(const string nam,T n,T n2) : BasicInfo(nam, n) {
		cgpa2 = n2;
	}
	void calculate() {
		sgpa = (cgpa1 + cgpa2) / 2;
	}
	void show() {
		cout << sgpa;
	}
};

int main() {
	Completeinfo m("sudeep",10,9.2);


}