#include <iostream>
#include <string>
using namespace std;

class Animal {

private:
	string Name;
	int age;
public:
	Animal(string n,int a) {
		this->Name = n;
		this->age = a;
	}
	void makeSound() {
		cout << "makes a sound";
	}
};
class Dog : public Animal {
public:
	Dog(string n, int a) : Animal(n, a) {
	}
	void bark(){
		cout << "bark";
	}
};

int main() {
	string name;
	int age;
	cin >> name;cin >> age;

	Dog d1(name, age);

	d1.bark();
	d1.makeSound();
}