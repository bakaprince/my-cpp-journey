#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    Student(int r) {
        roll = r;
    }

    // Post-increment
    Student operator++(int) {
        Student temp = *this;  // store old value
        roll++;                // increment current object
        return temp;           // return old value
    }

    void display() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student S1(10);

    Student S2 = S1++;

    cout << "S1 after increment: ";
    S1.display();

    cout << "S2 returned value: ";
    S2.display();

    return 0;
}