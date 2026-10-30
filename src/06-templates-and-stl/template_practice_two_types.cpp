#include <iostream>
using namespace std;

template<class T>
class Storage {
	T value;
public:
	Storage(T val) {
		value = val;
	}
	void display() {
		cout << value;
	}
	void input() {
		cout << "Enter Data To Store";
		cin >> value;
	}

};

int main() {
	Storage s1(10);
	Storage s2("abcd");
	Storage s3(10.232);
	Storage s4(true);
}