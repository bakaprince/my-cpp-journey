#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    Student(int r) {
        roll = r;
    }

    // Pre-increment
    friend Student operator++(Student &obj) {
        ++obj.roll;
        return obj;
    }

    void display() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student S1(10);

    Student S2 = ++S1;

    cout << "S1: ";
    S1.display();

    cout << "S2: ";
    S2.display();

    return 0;
}